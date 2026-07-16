#include<stdio.h>
#include<conio.h>

int main()
{
    char ch ='\0';

    printf("\n enter the character for their ASCII VALUE \n");
    scanf("%c" ,&ch);

    printf("\n ASCII VALUE of entered character is %c = %d" , ch , ch);

    getch();
    return 0;

}
