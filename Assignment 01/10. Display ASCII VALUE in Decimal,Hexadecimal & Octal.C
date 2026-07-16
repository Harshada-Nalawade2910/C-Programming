#include<stdio.h>
#include<conio.h>

int main()
{
    char ch ='\0';

    printf("\n Enter the character for their ASCII VALUE \n");
    ch = getche();

    printf("\n The ASCII VALUE of entered character is %d", ch);
    printf("\n The ASCII VALUE of entered character in Hexadecimal is %x", ch);
    printf("\n The ASCII VALUE of entered character in octal is %o" , ch);

    getch();
    return 0;
}
