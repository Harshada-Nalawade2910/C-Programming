#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0;

    printf("\n Enter the Number => ");
    scanf("%d",&num);

    num = num & ~(1 << 6);
    num = num & ~(1 << 9);

    printf("\n Modified Number of given number = %d",num);

    getch();
    return 0;
}
