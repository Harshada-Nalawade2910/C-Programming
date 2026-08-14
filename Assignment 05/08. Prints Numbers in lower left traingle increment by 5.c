#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, n = 0, num = 0;

    printf("\n Enter number of rows & columns: ");
    scanf("%d",&n);

    printf("\n Enter starting number: ");
    scanf("%d",&num);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num = num + 5;
        }

        printf("\n");
    }
getch();
return 0;
}
