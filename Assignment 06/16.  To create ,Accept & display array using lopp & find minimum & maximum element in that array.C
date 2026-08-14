#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0 , Num[10] = {}, MinNum = 0, MaxNum = 0;

    printf("\n Enter the 10 elements : \n");

    for(i = 0; i < 10; i++)
    {
        printf("\n The %d element : ",i+1);
        scanf("%d",&Num[i]);

        if(Num[i] > MaxNum)
        {
            MaxNum = Num[i];
        }

        if(Num[i] < MinNum)
        {
            MinNum = Num[i];
        }
    }
    printf("\n The Maximum Number between 10 numbers is %d",MaxNum);
    printf("\n The Minimum Number between 10 numbers is %d",MinNum);

    getch();
    return 0;
}
