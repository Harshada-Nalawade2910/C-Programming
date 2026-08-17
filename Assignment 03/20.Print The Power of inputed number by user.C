#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, base = 0, expo = 0, pwr = 1;

    printf("\n Enter the Base =>");
    scanf("%d" ,&base);
    REENTER:
    printf("\n Enter the exponent =>");
    scanf("%d" ,&expo);

    if(expo < 0)
    {
        printf("\n INVALID");
        getch();
        goto REENTER;
    }
    if(base == 0 || base == 1)
       {
            pwr = base;
       }

    for(i = 1; i <= expo; i++)
    {
        pwr = pwr * base;
    }

    printf("\n The power of %d ^ %d is : %d" ,base,expo,pwr);

    getch();
    return 0;
}
