#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, num = 0, min_num = 0;

    printf("\n Enter the 10 number ");

    for(i= 0 ; i <10 ; i++)
    {
        Reenter:
        printf("\n Enter the number %d\n" ,i+1);
        scanf("%d",&num);

        if(num <= 0)
        {
        printf("\n INVALID NUMBER");
        goto Reenter;
        }

        if((i == 0) || (num < min_num))
        {
            min_num = num;
        }
    }
    printf("\n minimum number between 10 number is %d" ,min_num);

    getch();
    return 0;
}
