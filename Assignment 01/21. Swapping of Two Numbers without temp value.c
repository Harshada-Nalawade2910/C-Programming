#include<stdio.h>
#include<conio.h>

int main()
{

    int num1 , num2;

        printf("\n Enter the first Number:");
        scanf("%d" ,&num1);

        printf("\n Enter the Second Number:");
        scanf("%d" ,&num2);

        printf("\n Before Swapping = num1 = %d, num2 = %d." ,num1 , num2);

        getch();

        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;

        printf("\n After Swapping = num1 = %d, num2 = %d." ,num1 , num2);

        getch();
        return 0;
}
