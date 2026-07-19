#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, num = 0, min_num = 0;

    printf("\n Enter 10 numbers");

    while(i < 10)
    {
        printf("\n Enter the number %d\n" ,i+1);
        scanf("%d" ,&num);

        if((i == 0)|| (num < min_num))
        {
            min_num = num;
        }
        i++;
    }
     printf("\n The Minimum number between 10 numbers is %d" ,min_num);

     getch();
     return 0;
}
