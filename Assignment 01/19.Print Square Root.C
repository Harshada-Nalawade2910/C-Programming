#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float num = 0.0 , sqr_rt = 0.0;

    printf("\n enter the number:");
    scanf("%f" ,&num);

    sqr_rt = sqrt(num);

    printf("\n sqr_rt of %0.2f is %0.2f", num, sqr_rt);

    getch();
    return 0;
}
