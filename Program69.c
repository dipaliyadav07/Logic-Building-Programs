#include<stdio.h>
#include<stdlib.h>

// Step 5 : Perform the operation on array
void DisplayEvenOddCount(int Arr[],int iSize)
{
    int iCnt = 0, iEvenCnt = 0, iOddCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenCnt++;
        }
        else
        {
            iOddCnt++;
        }
    }
    printf("number of even elements are : %d\n",iEvenCnt);
    printf("number of odd elements are : %d\n",iOddCnt);
    // printf("number of odd elements are : %d\n",iSize - iEvenCnt);
}
int main()
{
    int * ptr = NULL;
    int i = 0, iLength = 0;

    // Step 1 : Accept size of array
    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    // Step 2 : Allocate memory for Array
    ptr = (int *)malloc(iLength * sizeof(int));

    // Step 3 : Accept the elements of array
    printf("Enter the elements of Array : \n");

    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    // Step 4 : Call the function
    DisplayEvenOddCount(ptr,iLength);

    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}