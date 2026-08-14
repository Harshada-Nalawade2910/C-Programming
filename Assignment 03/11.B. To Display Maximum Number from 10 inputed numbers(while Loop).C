#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 1, num = 0, max_num = 0;

    printf("\n Enter 10 numbers");

    while(i <= 10)
    {
        REENTER:
        printf("\n Enter the number %d\n" ,i);
        scanf("%d" ,&num);

        if(num <= 0)
        {
            printf("\n INVALID INPUT");
            goto REENTER;
        }
        i++;
        if(num > max_num)
        {
            max_num = num;
        }
    }
    printf("\n Maximum number between 10 number is %d" ,max_num);

    getch();
    return 0;
}
