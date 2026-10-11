#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

    printf("\n Enter the Number =>  ");
    scanf("%d",&Num);

    if((Num >> 14)& 1)
    {
        printf("\n The 15th bit of %d is ON",Num);
    }
  else
    {
        printf("\n The 15th bit of %d is OFF",Num);
    }

    getch();
    return 0;
}
