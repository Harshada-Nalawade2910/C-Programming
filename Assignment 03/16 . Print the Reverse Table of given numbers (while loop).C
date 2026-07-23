#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0 , i = 10;

    printf("\n Enter the number for table printing\n");
    scanf("%d" ,&num);

    while(i >= 1) //for(i = 10; i >= 1; i--)
    {
        printf("\n %d * %d = %d" , num , i , num * i);
        i--;
    }

    getch();
    return 0;
}
