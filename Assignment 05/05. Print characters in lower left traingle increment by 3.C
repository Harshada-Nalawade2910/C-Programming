#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, n = 0;
    char ch = 'A';

    printf("\n Enter number of rows & columns: ");
    scanf("%d",&n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%c",ch);

            ch = ch + 3;

            if(ch > 'Z')
            {
                ch = ch - 26;
            }
        }

        printf("\n");
    }
getch();
return 0;
}
