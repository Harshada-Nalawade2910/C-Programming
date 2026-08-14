#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0 , Num[10] = {}, ZCnt = 0;

    printf("\n Enter the 10 elements : \n");

    for(i = 0; i < 10; i++)
    {
        printf("\n The %d element : ",i+1);
        scanf("%d",&Num[i]);

        if(Num[i] == 0)
        {
            ZCnt++;
        }
    }
    printf("\n The count of NULL elements in 10 elements is %d",ZCnt);

    getch();
    return 0;
}
