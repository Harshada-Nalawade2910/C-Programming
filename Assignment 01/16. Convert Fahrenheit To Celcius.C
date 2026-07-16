#include<stdio.h>
#include<conio.h>

int main()
{

    float fahrenheit = 0.0 , celcius = 0.0;

    printf("\n Enter The Temperature in fahrenheit: ");
    scanf("%f" ,&fahrenheit);

    celcius = (fahrenheit - 32) * 5/9;

    printf("\n temperature in celcius: %0.2f c", celcius);

    getch();
    return 0;
}
