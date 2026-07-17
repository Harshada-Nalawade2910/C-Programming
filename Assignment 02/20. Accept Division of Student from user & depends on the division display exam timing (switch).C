#include<stdio.h>
#include<conio.h>

int main()
{
    char Div = '/0';

    printf("\n Enter the Division \n");
    scanf("%c" ,&Div);

    switch(Div)
    {
        case 'A':
        case 'a':
            printf("\n your exam at 10 AM\n");

            break;


        case'B':
        case'b':
            printf(" \n your exam at 12 AM \n");

            break;

        case'C':
        case'c':
            printf("\n your exam at 2 PM \n");

            break;

        case'D':
        case'd':
            printf("\n your exam at 4 PM \n");

            break;

        default:
            printf("\n Invalid Division");

            break;

    }

    getch();
    return 0;

}
