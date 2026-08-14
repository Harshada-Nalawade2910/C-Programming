#include<stdio.h>
#include<conio.h>

int main()
{
    int i =0 , num = 0 , maxnum = 0;

    printf("\n Enter all 10 numbers");

    for(i = 1 ; i <= 10 ; i++)
    {
        printf("\n Enter the number %d\n" ,i);
        scanf("%d",&num);

        if(num > maxnum)
        {
            maxnum = num;
        }
    }

    printf("\n The maximum number between 10 numbers is %d",maxnum);

    getch();
    return 0;
}
