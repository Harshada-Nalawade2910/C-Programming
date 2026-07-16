#include<stdio.h>
#include<conio.h>

int main()
{

    float Rad = 0.0 , Area = 0.0;
    const float PI = 3.14;

    printf("\n Enter The Radius of Circle: ");
    scanf("%f" ,&Rad);

    Area = PI * Rad * Rad;

    printf("\n The area Of Circle With Radius %0.2f = %0.2f.",Rad, Area);

    getch();
    return 0;
}
