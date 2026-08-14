#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0 , Num[10] = {}, ONum = 0;

    printf("\n Enter the 10 elements : \n");

    for(i = 0; i < 10; i++)
    {
        printf("\n The %d element : ",i+1);
        scanf("%d",&Num[i]);

        if(Num[i] % 2 == 1)
        {
            ONum++;
        }
    }
    printf("\n The count of Odd numbers in 10 elements is %d",ONum);

    getch();
    return 0;
}
