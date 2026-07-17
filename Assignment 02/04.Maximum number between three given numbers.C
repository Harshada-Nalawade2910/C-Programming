#include<stdio.h>
#include<conio.h>

int main()
{
    int num1 = 0, num2 = 0, num3 = 0;

    printf("\n Enter the first number");
    scanf("%d" ,&num1);
    printf("\n Enter the second number");
    scanf("%d" ,&num2);
    printf("\n Enter the third number");
    scanf("%d" ,&num3);
    {

        if(num1 >= num2 && num1 >= num3)
        printf("\n The Number %d is greater" , num1);

        else if(num2 >= num1 && num2 >= num3)
        printf("\n The Number %d is greater" , num2);

        else
        printf("\n the number %d is greater" , num3);
    }

        getch();
        return 0;
}
