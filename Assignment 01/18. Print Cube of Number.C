#include<stdio.h>
#include<conio.h>

int main()
{

    int num = 0 , cube = 0;

    printf("\n Enter the number:");
    scanf("%d" ,&num);

        cube = num * num * num;

    printf("\n Cube of %d is %d" , num , cube);

    getch();
    return 0;
}
