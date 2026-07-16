#include<stdio.h>
#include<conio.h>

int main()
{

    int Sub1  , Sub2  , Sub3  , Total;
    float Per;

    printf("\n The First Subject Mark: ");
    scanf("%d" ,&Sub1);
    printf("\n The Second Subject Mark: ");
    scanf("%d" ,&Sub2);
    printf("\n The Third Subject Mark: ");
    scanf("%d" ,&Sub3);

        Total= Sub1 + Sub2 + Sub3 ;
        Per= (float) Total / 3;

    printf("\n The Total Mark = %d + %d + %d = %d\n" , Sub1 , Sub2 , Sub3 , Total);
    printf("Percentage = %0.2f" , Per);

    getch();
    return 0;
}

