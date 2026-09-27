#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Stud
{
    int R_No;
    char Name[20];
    int Physics;
    int Chemistry;
    int Maths;
    int Total;
    float Per;
};

int main()
{

    int i = 0;
    struct Stud Std [3] = {};

    for(i = 0; i < 3; i++)
    {
        printf("\n Enter %d student information =>  ",i+1);

        printf("\n Enter Student Roll Number => ");
        scanf("%d",&Std[i].R_No);

        fflush(stdin);
        printf("\n Enter Student Name => ");
        scanf("%s",&Std[i].Name);

        printf("\n Enter Student physics marks => ");
        scanf("%d",&Std[i].Physics);

        printf("\n Enter Student chemistry marks => ");
        scanf("%d",&Std[i].Chemistry);

        printf("\n Enter Student Maths Marks => ");
        scanf("%d",&Std[i].Maths);

        Std[i].Total = Std[i].Physics + Std[i].Chemistry + Std[i].Maths;
        Std[i].Per = (float)Std[i].Total / 3.0;
    }

     printf("\n Student Details Are as Follows => \n ");

        for(i = 0; i < 3; i++)
        {

            printf("\n Student %d details are",i+1);

            printf("\n\n");

            printf("\n Roll no = %d", Std[i].R_No);
            printf("\n Name    = %s", Std[i].Name);
            printf("\n Physics = %d", Std[i].Physics);
            printf("\n Chemistry = %d", Std[i].Chemistry);
            printf("\n Maths = %d", Std[i].Maths);
            printf("\n Total = %d", Std[i].Total);
            printf("\n Percentage = %f",Std[i].Per);

            printf("\n\n");
        }

    getch();
    return 0;
};


