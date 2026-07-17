#include<stdio.h>
#include<conio.h>
int main()
{
    int num = 0;

    printf("\n Enter the number:");
    scanf("%d" ,&num);
     {
        if(num % 7 == 0)
        printf("%d is divisible by 7" , num);

        else
        printf("%d is not divisible by 7" , num);

     getch();
     return 0 ;
     }

}
