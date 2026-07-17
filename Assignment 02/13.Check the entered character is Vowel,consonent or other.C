#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter a Character");
    ch = getche();

    if(ch >= '0' && ch <= '9')
    {
        printf("\n character is number");
    }

    else if(ch == 'A' ||  ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
    {
        printf("\n character is Vowel");
    }

    else if( ( ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') )
    {
        printf("\n character is not vowel");
    }

    else
    {
        printf("\n character is special symbol");
    }

    getch();
    return 0;
}
