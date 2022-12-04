#include<stdio.h>

int CountDigits(int iNo)
{
    int iCnt = 0;
    
    if (iNo == 0)       // Filter 
    {
        return 1;
    }

    if(iNo < 0)       // Updator
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iNo = iNo / 10;
        iCnt++;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Number of digits are : %d\n",iRet);


    return 0;
}