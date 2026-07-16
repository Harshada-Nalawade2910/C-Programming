#include<stdio.h>
#include<conio.h>

int main()
{
    int num1 , num2 , temp;

    printf("\n Enter the first number:");
    scanf("%d" ,&num1);

    printf("\n Enter the second number:");
    scanf("%d" ,&num2);

    printf("\n Before swapping = num1 = %d, num2 = %d.",num1, num2);

    getch();

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf(" \n After Swapping = num1 = %d, num2 = %d.",num1, num2);

    getch();
    return 0;
}
