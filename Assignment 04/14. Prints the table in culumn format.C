#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, R = 0, C = 0, num = 0;

    printf("\n Enter the row count=>");
    scanf("%d",&R);
    printf("\n Enter the column count=>");
    scanf("%d",&C);
    printf("\n Enter the number for table printing=>");
    scanf("%d",&num);

    for(i = 1; i <= R; i++)
    {
        for(j = 1; j <= C; j++)
        {
            printf("%3d", num * ((j -1)*C+i) );

        }
        printf("\n");
    }
    getch();
    return 0;
}
