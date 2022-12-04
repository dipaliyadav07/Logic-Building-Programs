// input : 4
// output : a   b   c   d

#include<stdio.h>
// ASCII
// American Standard Code for information interchange

void Display(int iNo)    //time complexity - N
{
    int iCnt = 0;
    char ch = 'a';

    if(iNo < 0)
    {
        iNo = -iNo;
    }   
    
    for(iCnt = 1; iCnt <= iNo; iCnt++, ch++)
    {
        printf("%c\t",ch);
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