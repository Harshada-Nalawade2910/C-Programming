#include<stdio.h>
#include<conio.h>

int main()
{

    float KM = 0.0 , M = 0.0;

    printf("\n Enter the Distance in kiloMeter:");
    scanf("%f" ,&KM);

    M = KM * 1000;

    printf("\n The Distane in Meter %0.2f KM = %0.2f M." , KM, M);

    getch();
    return 0;


}
