#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, n = 0;

    printf("Enter number of rows & columns: ");
    scanf("%d",&n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(i == 1 || i == n || j == 1 || j == n)
            {
                printf("%c ", 'A' + j - 1)
            }

            else
            {
                 printf("   ");
            }
        }

        printf("\n");
    }

getch();
return 0;
}
