#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0, sum = 0, i = 0;

    printf("\n Enter the 10 numbers to sum\n");

    while(i < 10)
    {
        printf("\n Enter the Number %d \n" ,i + 1);
        scanf("%d" ,&num);

        if(num > 0)
        {
            sum = sum + num;
        }
        i++;
    }

    printf("\n The Addition of 10 numbers is %d" ,sum);

    getch();
    return 0;
}
