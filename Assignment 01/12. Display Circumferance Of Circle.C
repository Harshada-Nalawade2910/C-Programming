#include<stdio.h>
#include<conio.h>

int main()
{
    float Rad = 0.0 , Circum = 0.0;
    const float PI = 3.14;



    printf("\n enter the Radius of circle:");
    scanf("%f",&Rad);

        Circum = 2 * PI * Rad;

    printf("\n The Circumferance of Circle with Radiuds %0.2f = %0.2f." , Rad , Circum);

    getch();
    return 0;

}
