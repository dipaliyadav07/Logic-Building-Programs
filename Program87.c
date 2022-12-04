// input : 4
// output : 1   2   3   4   *   *   *   *

#include<stdio.h>

void Display(int iNo)    //time complexity - 2N
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }   
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
       printf("*\t");
    } 
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}