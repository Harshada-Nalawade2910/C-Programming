#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter the Character");
    scanf("%c" ,&ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        printf("\n Given Character %c is Uppercase" , ch);

    }

    else if(ch >= 'a' && ch <= 'z')
    {
        printf("\n Given Character %c is Lowercase" , ch);

    }

    else if(ch >= '0' && ch <= '9')
    {
        printf("\n Given Character %c is Digit" , ch);

    }

    else
    {
        printf("\n It is a Special Symbol");

    }


    getch();
    return 0;
}
