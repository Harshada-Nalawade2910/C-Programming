#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, num = 0, min_num = 0, max_num = 0;

    printf("\n Enter 5 numbers =>");

    while(i < 5)
    {
    printf("\n Enter the number %d  ", i+1);
    scanf("%d" ,&num);

        if((i == 0) || (num > max_num))
        {
            max_num = num;
        }

        if((i == 0)|| (num < min_num))
        {
            min_num = num;
        }
        i++;
    }

    printf("\n The Maximum number between 5 numbers is %d" ,max_num);
    printf("\n The Minimum number between 5 numbers is %d" ,min_num);
    getch();
    return 0;
}
