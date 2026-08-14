#include<stdio.h>
#include<conio.h>

int main()
{
    int iNum[7] = {};

    //NULL INITIALIZATION

    printf("\n The value of 1st element => %d", iNum[0]);
    printf("\n The value of 2nd element => %d", iNum[1]);
    printf("\n The value of 3rd element => %d", iNum[2]);
    printf("\n The value of 4th element => %d", iNum[3]);
    printf("\n The value of 5th element => %d", iNum[4]);
    printf("\n The value of 6th element => %d", iNum[5]);
    printf("\n The value of 7th element => %d", iNum[6]);

    printf("\n \n Press the key for continue \n");

    getch();

    //DISPLAY ELEMENT

    printf("\n Enter the 1st element : ");
    scanf("%d",&iNum[0]);
    printf("\n Enter the 2nd element : ");
    scanf("%d",&iNum[1]);
    printf("\n Enter the 3rd element : ");
    scanf("%d",&iNum[2]);
    printf("\n Enter the 4th element : ");
    scanf("%d",&iNum[3]);
    printf("\n Enter the 5th element : ");
    scanf("%d",&iNum[4]);
    printf("\n Enter the 6th element : ");
    scanf("%d",&iNum[5]);
    printf("\n Enter the 7th element : ");
    scanf("%d",&iNum[6]);

    getch();
    return 0;
}
