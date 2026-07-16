#include<stdio.h>
#include<conio.h>

int main()
{
    int num =0;

    printf("\n enter the ASCII NUMBER for their CHAR VALUE \n");
    scanf("%d" ,&num);

    printf("\n ASCII VALUE of entered number is %d = %c" , num , num);

    getch();
    return 0;

}
