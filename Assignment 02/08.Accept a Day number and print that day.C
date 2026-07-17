#include<stdio.h>
#include<conio.h>
int main()
{
    int day;
    printf("\n Enter the day number:");
    scanf("%d" ,&day);
    {

        if(day == 1)
        printf("The day is Monday");

       else if(day == 2)
        printf("The day is Tuesday");

       else if(day == 3)
        printf("The day is Wedesnday");

       else if(day == 4)
        printf("The day is Thrusday");

       else if(day == 5)
        printf("The day is Friday");

        else if(day == 6)
        printf("The day is Saturday");

        else if(day == 7)
        printf("The day is Sunday");

        else
        printf("The invalid day");
    }
getch();
return 0;


}



