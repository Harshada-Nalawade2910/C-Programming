#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter the character \n");
    ch = getche();

    if(ch >= 'A' && ch <= 'Z')
    {
        while(ch <= 'Z')
        {
            printf("\n %c" ,ch);
            ch++;
        }
    }

    else if(ch >= 'a' && ch <= 'z')
    {
        while(ch >= 'a')
        {
            printf("\n %c" ,ch);
            ch--;
        }
    }

    else
    {
        printf("\n INVALID INPUT");
    }

    getch();
    return 0;
}
