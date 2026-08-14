#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0 , Num[10] = {};

    printf("\n Enter the 10 elements : \n");

    for(i = 1; i <= 10; i++)
    {
        printf("\n The %d element: ",i);
        scanf("%d",&Num[i]);
    }
    printf("\n Array elements are : ");

    for(i = 1; i <= 10; i++)
    {
        printf("\n The %d element is %d : ",i,Num[i]);
    }

    getch();
    return 0;
}
