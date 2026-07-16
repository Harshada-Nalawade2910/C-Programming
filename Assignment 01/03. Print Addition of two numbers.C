#include<stdio.h>
#include<conio.h>

int main()
{
    int Num1 = 0, Num2 = 0, Ans = 0;

    printf("\n Enter First Number:");
    scanf("%d", &Num1);
    printf("\n Enter second Number:");
    scanf("%d", &Num2);

        Ans= Num1 + Num2;

    printf("\n Addition of two numbers %d and %d = %d", Num1 , Num2 , Ans);

    getch();
    return 0;
 }
