#include<stdio.h>
#include<conio.h>
int main()
{
    char ch = '\0';

    printf("\n Enter a Character:");
    ch = getche();

    if( ch == 'a' ||ch == 'e' || ch == 'i' ||ch == 'o' || ch == 'u' )
    {
        printf("\n Entered Letter %c is Vowel.",ch);
    }
    else
    {
        printf("\n Given Letter %c is not Vowel", ch);
    }

getch();
return 0;
}
