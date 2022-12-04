#include<stdio.h>

void DisplayTable(int iNo)
{
    int iCnt = 0;

    printf("_____________________________\n");
    printf("Table of  %d is :\n",iNo);
    printf("_____________________________\n");

    for (iCnt = 1; iCnt <= 10; iCnt++)
    {
       printf("5 * %d = %d\n",iCnt,iNo *iCnt);
    }
    printf("_____________________________\n");
}

int main()
{
    int iValue = 0;
    
    printf("Enter the number : \n");
    scanf("%d",&iValue);

    DisplayTable(iValue);

    return 0;
}