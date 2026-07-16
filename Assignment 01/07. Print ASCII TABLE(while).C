#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0;

    printf("\n ASCII table for 0 - 127");

    while(num <= 127)
    {
        printf("\n %d = %c" , num , num);
        num++;
    }
    getch();
    return 0;

}
