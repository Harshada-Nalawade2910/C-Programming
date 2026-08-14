#include<stdio.h>
#include<conio.h>

int main()
{
    int num1 = 0, num2 = 0 , i = 0;

    printf("\n Enter the num1 \n ");
    scanf("%d" ,&num1);

    printf("\n Enter the num2 \n");
    scanf("%d" ,&num2);

    if(num2 >= 1)
    {
        for(i = 1; i <= num2; i++)

        printf("\n %d", num1);
    }

    else
    {
    printf(" invalid input");
    }


    getch();
    return 0;
}
