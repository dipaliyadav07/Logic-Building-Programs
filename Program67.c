#include<stdio.h>
#include<stdlib.h>

// Float Average(int *Arr, int iSize)
float Average(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return (iSum / iSize);
}
int main()
{
    int * ptr = NULL;
    int iCnt = 0, iLength = 0;
    float fRet = 0.0f;

    printf("Enter the number of elements you want store :\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    // ptr = (int *)malloc(5 * 4);

    printf("Enter the elements :\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    //fRet = Average(500,5);
    fRet = Average(ptr,iLength);

    printf("\nAverage of numbers is :%f\n",fRet);

    free(ptr);  //free(500)
}