#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0 , Num[10] = {}, ZCnt = 0, ONum = 0, ENum = 0;

    printf("\n Enter the 10 elements : \n");

    for(i = 0; i < 10; i++)
    {
        printf("\n The %d element : ",i+1);
        scanf("%d",&Num[i]);

        if(Num[i] == 0)
        {
            ZCnt++;
        }

        else if(Num[i] % 2 == 0)
        {
            ENum++;
        }

        else
        {
            ONum++;
        }

    }
    printf("\n The count of EVEN elements in 10 elements is %d",ENum);
    printf("\n The count of ODD elements in 10 elements is %d",ONum);
    printf("\n The count of ZERO elements in 10 elements is %d",ZCnt);

    getch();
    return 0;
}
