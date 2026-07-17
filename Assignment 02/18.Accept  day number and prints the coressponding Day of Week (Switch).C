#include<stdio.h>
#include<conio.h>
int main()
{
    int day = 0;

    printf("\n Enter the Day Number");
    scanf("%d" ,&day);

    switch(day)

    {
        case 1:
        printf("\n Day is Monday");

        break;

        case 2:
        printf("\n Day is Tuesday");

        break;

        case 3:
        printf("\n Day is wendesday");

        break;

        case 4:
        printf("\n Day is Thrusday");

        break;

        case 5:
        printf("\n Day is Friday");

        break;

        case 6:
        printf("\n Day is Saturday");

        break;

        case 7:
        printf("\n Day is sunday");

        break;

        default:
        printf("\n Invalid Day");

        getch();
        return 0;


    }

}
