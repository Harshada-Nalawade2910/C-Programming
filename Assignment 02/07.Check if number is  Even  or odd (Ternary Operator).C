#include<stdio.h>
#include<conio.h>
int main()
{
    int num = 0;

    printf("\n Enter the number");
    scanf("%d" ,&num);
     // condition      //true condition                                    //false conditionh

    (num % 2 == 0) ? printf("\n Given Number %d is even",num) : printf("\n Given Number is %d is odd", num);

    getch();
    return 0;
}
