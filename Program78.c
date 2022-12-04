#include<stdio.h>
#include<stdlib.h>

void DisplayReverse(int Arr[], int iSize)
{
    int iCnt = 0;

    printf("The reverse order is :\n");
    for (iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
        printf("%d\n",Arr[iCnt]);
    }
}
int main()
{
    int *ptr = NULL;
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
    DisplayReverse(ptr,iLength);

    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}