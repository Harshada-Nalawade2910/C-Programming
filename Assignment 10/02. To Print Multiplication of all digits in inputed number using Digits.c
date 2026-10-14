#include<stdio.h>
#include<conio.h>

int main()
{
    int MNum = 1;
    int Temp = 0;
    short int Digit = 0;
    long long int Num = 0;

    printf("\n Enter the integer number => ");
    scanf("%lld",&Num);

    Temp = Num;

    while(Temp != 0)
    {
        Digit = Temp % 10;

        MNum *= Digit;

        Temp = Temp / 10;
    }

    printf("\n Multiplication of All Digits In %lld is => %d",Num,MNum);

    getch();
    return 0;
}
