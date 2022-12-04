#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
    int iDigit = 0, iRev = 0;
    int iTemp = iNo;

    for(iDigit = 0, iRev = 0; iNo != 0; iNo = iNo / 10)     // you can also write for loop as -> for(;iNo != 0;)
    {   
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
    }
    return(iRev == iTemp);
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPalindrome(iValue);
    if(bRet == true)
    {
        printf("%d is a palindrome number\n",iValue);
    }
    else
    {
        printf("%d is not a pallindrome number\n",iValue);
    }

    return 0;
}