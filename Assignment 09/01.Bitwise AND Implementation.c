#include<stdio.h>
#include<conio.h>

int main()
{
    int Num1 = 0, Num2 = 0, Res = 0;

    printf("\n Enter 1st Number = ");
    scanf("%d",&Num1);
    printf("\n Enter 2nd Number = ");
    scanf("%d",&Num2);

    Res = Num1 & Num2;

    printf("\n Result => %d & %d = %d", Num1, Num2, Res);


    getch();
    return 0;
}

