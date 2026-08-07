#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, X = 0;
    char ch = '\0';

    printf("\n Enter the Count for printing");
    scanf("%d",&X);

    for(i = 1; i <= X; i++)
    {
        for(j = 1; j <= X; j++)
        {
            if(i >= j)
            {
                printf("%c", ch);
            }
                if(ch > 'Z')
                {
                    ch = 'A';
                }
                ch - 26;
        }
        printf("\n");
    }
    getch();
    return 0;
}
