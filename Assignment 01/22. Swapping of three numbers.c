#include<stdio.h>
#include<conio.h>

int main()
{
    int num1 , num2 , num3 , temp;

    printf("\n Enter the First Number:");
    scanf("%d" ,&num1);

    printf("\n Enter the Second Number:");
    scanf("%d" ,&num2);

    printf("\n Enter the Third Number:");
    scanf("%d" ,&num3);

    printf("\n Before Swapping = num1 = %d , num2 = %d , num3 = %d.", num1 , num2 , num3);

    getch();

    num1 = num2;
    num2 = num3;
    num3 = temp;
    temp = num1;

    printf("\n After Swapping = num1 = %d , num2 = %d , num3 = %d.", num1,num2,num3);

    getch();
    return 0;

}
