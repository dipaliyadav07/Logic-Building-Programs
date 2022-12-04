#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[],int iSize)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int *ptr = NULL;
    int iCnt = 0, iRet = 0, iLength = 0;

    printf("Enter the number you want store : \n");
    scanf("%d",&iLength);
    
    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements :\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
    scanf("%d",&ptr[iCnt]);
    }

    printf("Elements from array are : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
    printf("%d\n",ptr[iCnt]);
    }

    iRet = Summation(ptr,iLength);        // Summation(100,5);
    printf("Addition of all elements is : %d\n",iRet);

    free(ptr);

    return 0;
}