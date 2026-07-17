#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter the Character\n");
    ch = getche();

    if(ch >= 'A' && ch <= 'Z')
    {
        printf("\n The inputed character %c is UPPERCASE\n" ,ch);
    }

    else if(ch >= 'a' && ch <= 'z')
    {
        printf("\n The inputed Character %c is LOWERCASE\n" ,ch);
    }

    else if(ch >= '0' && ch <= '9')
    {
        printf("\n The inputed Character %c is a NUMBER\n" ,ch);
    }

    else
    {
        printf("\n The inputed Character %c is SPECIAL SYMBOL\n" ,ch);
    }

    getch();
    return 0;


}
