#include<stdio.h>
#include<conio.h>
int main()
{
    int num = 0;

    printf("\n Enter the first number:");
    scanf("%d" ,&num);
    {
    if(num % 7 == 0 && num % 5 == 0)
    printf("%d is divisible by both" , num);

    else
    printf("%d is not divisible by both" , num);
    }

getch();
return 0;
}

