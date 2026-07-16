#include<stdio.h>
#include<conio.h>

int main()
{

    int num = 0 , square = 0;

    printf("\n Enter the number:");
    scanf("%d" ,&num);

    square = num * num;

    printf("The Square of number is %d = %d." , num , square);

    getch();
    return 0;
}


