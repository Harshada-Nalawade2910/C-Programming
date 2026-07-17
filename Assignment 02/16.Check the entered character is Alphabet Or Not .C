#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter the Alphabet");
    scanf("%c" ,&ch);

    if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
    {
        printf("\n It is the Alphabet");
    }

    else
    {
        printf("\n It is not Alphabet");
    }

    getch();
    return 0;
}
