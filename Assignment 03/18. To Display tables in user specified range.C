#include<stdio.h>
#include<conio.h>

int main()
{
    int Spt = 0, Ept = 0, i = 0, j = 0;

    printf("\n Enter the starting point \n");
    scanf("%d",&Spt);
    printf("\n Enter the ending point \n");
    scanf("%d",&Ept);

    if(Spt < Ept)
    {
        for(i = 1; i <= 10; i++)
        {
            for(j = Spt; j <= Ept; j++)
            {
                printf("%4d", i*j);
            }
        printf("\n");
        }
    }

    else
    {
        for(i = 1; i <= 10; i++)
        {
            for(j = Spt; j >= Ept; j--)
            {
                printf("%4d", i*j);
            }
            printf("\n");
        }
    }

getch();
return 0;
}
