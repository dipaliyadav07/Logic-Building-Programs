// input : 4
// output : 4   3   2   1

#include<stdio.h>

void DisplayRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }   

    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        printf("%d\t",iCnt);
    }  

}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayRev(iValue);

    return 0;
}