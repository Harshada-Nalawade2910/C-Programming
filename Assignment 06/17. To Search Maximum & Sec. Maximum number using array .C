#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, Num[5] = {}, Max = 0, SecMax = 0;

    printf("\n Enter 5 numbers : ");

    for(i = 0; i < 5; i++)
    {
        printf("\n Enter number %d : ",i+1);
        scanf("%d",&Num[i]);

    }

    for(i = 1; i < 5; i++)
    {
        if(Num[i] > Max)
        {
            Max = Num[i];
        }
    }

    for(i = 0; i < 5; i++)
    {
        if(Num[i] > SecMax && Num[i] < Max)
        {
            SecMax = Num[i];
        }
    }
    printf("\n Maximum = %d",Max);
    printf("\n Second Maximum = %d",SecMax);

    getch();
    return 0;
}
