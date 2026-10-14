#include<stdio.h>
#include<conio.h>

int main()
{
    int SNum = 0;
    int Temp = 0;
    short int Digit = 0;
    long long int Num = 0;

    printf("\n Enter the integer number => ");
    scanf("%lld",&Num);

    Temp = Num;

    while(Temp != 0)
    {
        Digit = Temp % 10;

        SNum = SNum + Digit;

        Temp = Temp / 10;
    }

    printf("\n Addition of All Digits In %lld is => %d",Num,SNum);

    getch();
    return 0;
}
