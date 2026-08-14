#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, num[10] = {}, count = 0 ,src = 0;

    printf("\n Enter 10 elements:\n");

    for(i = 0; i < 10; i++)
    {
        printf("\n Enter the number %d : ",i+1);
        scanf("%d",&num[i]);
    }

    printf("\nEnter element to find count: ");
    scanf("%d",&src);

    for(i = 0; i < 10; i++)
    {
        if(num[i] == src)
        {
            count++;
        }
    }

    printf("Count of %d = %d", src, count);

    getch();
    return 0;
}
