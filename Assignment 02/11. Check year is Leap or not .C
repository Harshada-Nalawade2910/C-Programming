#include<stdio.h>
#include<conio.h>
int main()
{
    int year;

    printf("\n Enter the year:");
    scanf("%d" ,&year);

    if(year < 1000 || year > 9999)
    {
     printf("The year %d is invalid", year);
    }

    else if( year % 4 == 0)
    {
     printf("the year %d is leap year", year);
    }

    else
    {
     printf("the year is not leap year", year);
    }

getch();
return 0;
}
