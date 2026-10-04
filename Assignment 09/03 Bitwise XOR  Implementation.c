#include<stdio.h>
#include<conio.h>

int main()
{
    int Num1 = 0 , Num2 = 0 , Res = 0;

    printf("\n Enter The First number => ");
    scanf("%d",&Num1);

    printf("\n Enter The Second number => ");
    scanf("%d",&Num2);

    Res = Num1 ^ Num2;

    printf("\n The XOR Result of %d & %d is = %d", Num1,Num2,Res);

    getch();
    return 0;
}
