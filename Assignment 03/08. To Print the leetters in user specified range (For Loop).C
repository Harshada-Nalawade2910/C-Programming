#include<stdio.h>
#include<conio.h>

int main()
{
    char ch1 = '\0' , ch2 = '\0';

    printf("\n Enter First character \n");
    ch1 = getche();

    printf("\n Enter Second Character \n");
    ch2 = getche();

    if(ch1 >= 'A' && ch2 <= 'Z' || ch1 >= 'a' && ch2 <= 'z')
    {
        for( ; ch1 <= ch2 ; ch1++)  //reverse( ; ch1 >= ch2 ; ch1--)

        printf("\n %c" ,ch1);
    }

    else
    {
        printf("\n Invalid Input \n");
    }

    getch();
    return 0;

}
