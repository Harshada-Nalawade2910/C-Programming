#include<stdio.h>
#include<conio.h>

int main()
{
     int num = 0;

    printf("\n Enter the Number =>  ");
    scanf("%d",&num);

    if((((num >> 6) & 1) == 1) && (((num >> 7) & 1) == 1) && (((num >> 8) & 1) == 1))
    {
        printf("\n 7th , 8th and 9th bit of given numbers is ON");
    }

    else if((((num >> 6) & 1) == 1) && (((num >> 7) & 1) == 1))
    {
        printf("\n Only 7rd & 8th bit is ON");
    }

    else if((((num >> 7) & 1) == 1) && (((num >> 8) & 1) == 1))
    {
        printf("\n Only  8th & 9th bit is ON");
    }

    else if((((num >> 6)& 1) == 1) && (((num >> 8) & 1) == 1))
    {
        printf("\n Only 7th & 9th bit is ON");
    }

    else if(((num >> 6) & 1) == 1)
    {
        printf("\n Only 7th bit is ON");
    }

    else if(((num >> 7) & 1) == 1)
    {
        printf("\n Only 8th bit is ON");
    }

    else if(((num >> 8) & 1) == 1)
    {
        printf("\n Only 9th bit is ON");
    }

    else
    {
        printf("\n All bits are OFF");
    }

    getch();
    return 0;
}


