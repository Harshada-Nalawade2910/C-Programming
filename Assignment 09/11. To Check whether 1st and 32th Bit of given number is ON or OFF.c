#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0;

    printf("\n Enter the Number => ");
    scanf("%d",&num);

    if(((num >> 0) & 1) == 1)
        printf("\n First bit of number is ON");
    else
        printf("\n First bit of number is OFF");

    if(((num >> 31) & 1) == 1)
        printf("\n Last bit of number is ON");
    else
        printf("\n Last bit of number is OFF");

    getch();
    return 0;
}
