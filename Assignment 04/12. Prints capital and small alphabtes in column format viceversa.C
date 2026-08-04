#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, X = 0;
    char ch = '\0';

    printf("\n Enter the Count For printing =>");
    scanf("%d",&X);

    ch = 'a';
    for(i = 1; i <= X; i++)
    {
        for(j = 1; j <= X; j++)
        {
            if(j % 2 == 1)
            {
                printf("%c",ch);
            }
            else
            {
                printf(" %c ",ch - 32);
            }
        }
        ch++;
        printf("\n");
    }
    getch();
    return 0;
}
