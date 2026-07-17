#include<stdio.h>
#include<conio.h>
int main()
{
    int num = 0;

    printf("\n Enter the number:");
    scanf("%d" ,&num);
    {
        if(num <= 10)
        printf("Hello");

        else
        printf("World");
    }
getch();
return 0;
}
