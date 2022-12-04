// Demonstration of iteration using for loop

#include<stdio.h>

void Display()
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("Jay Ganesh...!\n");
    }
}

int main()
{
    Display();

    return 0;
}

// 1 : Write the common statement in the loop block
// 2 : Check whether the number of iteration are already known or not
// 3 : If the iterations count is fixed go for for loop
// 4 : If the Iteration count is not fixed then go for while loop 