#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0 , i = 1;

    printf("\n Enter the number for printing stars \n");
    scanf("%d" ,&num);

    while(i <= num)
    {
        printf("\n\n * ");
        i++;
    }
    getch();
    return 0;
}
