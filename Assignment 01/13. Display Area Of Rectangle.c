#include<stdio.h>
#include<conio.h>

int main()
{

    int width=0,height=0,area=0;

    printf("\n The width of the rectangle is:");
    scanf("%d" ,&width);

    printf("\n The Height of the rectangle is:");
    scanf("%d" ,&height);

    area = height * width;

    printf("\n The Area of the Rectangle is %d", area);

 getch();
 return 0;
 }
