#include<stdio.h>
#include<stdbool.h>

int SumNonFactors(int iNo)
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
         if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = SumNonFactors(iValue);

    printf("Summation of non factors is : %d\n",iRet);

    return 0;
}