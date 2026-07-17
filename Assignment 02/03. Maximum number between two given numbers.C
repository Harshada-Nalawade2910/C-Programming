#include<stdio.h>
#include<conio.h>

int main()
{
    int num1 = 0, num2 = 0;

    printf("\n Enter the first number");
    scanf("%d" ,&num1);
    printf("\n Enter the second number");
    scanf("%d" ,&num2);

        if(num1 > num2)
        printf("\n The First number is greater");

        else if(num1 < num2)
        printf("\n The second number is greater");

        else
        printf("\n The both numbers are equal");

    getch();
    return 0;
}
