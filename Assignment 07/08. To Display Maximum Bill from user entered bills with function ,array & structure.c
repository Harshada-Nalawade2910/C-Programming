#include<stdio.h>
#include<conio.h>

#define MxCnt 7

void AcceptBills(int *Mxptr);
void DisplayBills(int *Mxptr);
int MaxBill(int *Mxptr);

int main()
{
    int i = 0;
    int Bills [MxCnt];

    printf("\n Enter All Bills =>  ");
    printf("\n\n");

    AcceptBills(Bills);

    printf("\n Display All Entered Bills =>  ");

    DisplayBills(Bills);

    printf("\n Maximum bill from all entered bill is => %d",MaxBill(Bills));

    getch();
    return 0;
}

void AcceptBills(int *Mxptr)
{
    int i = 0;

    for(i = 0; i < MxCnt; i++)
    {
        printf("\n Enter %d bill =>  ",i+1);
        scanf("%d",&Mxptr[i]);
    }
}

void DisplayBills(int *Mxptr)
{
    int i = 0;

    for(i = 0; i < MxCnt; i++)
    {
        printf("\n Bill %d = %d",i+1,Mxptr[i]);
    }
}

int MaxBill(int *Mxptr)
{
    int i = 0 , MaxBill = 0;

    for(i = 0; i < MxCnt; i++)
    {
        if(Mxptr[i] > MaxBill)
        {
            MaxBill = Mxptr[i];
        }
    }
    return MaxBill;
}
