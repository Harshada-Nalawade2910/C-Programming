#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0, i = 0;

    printf("\n Enter the number for printing smiley\n");
    scanf("%d" ,&num);

    for(i = 1; i<= num; i++)
    {
     printf("\n\n :)");
    }

    getch();
    return 0;
}
