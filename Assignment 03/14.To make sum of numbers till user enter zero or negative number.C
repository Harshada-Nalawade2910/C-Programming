#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, num = 0, sum = 0;

    while(1)
    {

    printf("\n Enter the numbers %d =>" , i+1);
    scanf("%d" ,&num);

        if(num <= 0)
        {
            printf("\n INVALID INPUT");
            getch();
            break;
        }
        sum = sum + num;
        i++;
    }

        printf("\n The sum of numbers is %d" ,sum);

    getch();
    return 0;
}
