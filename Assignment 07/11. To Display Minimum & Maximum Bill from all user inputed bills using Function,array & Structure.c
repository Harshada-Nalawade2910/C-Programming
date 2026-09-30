#include<stdio.h>
#include<conio.h>

#define MCnt 7

void AcceptBills(int *Mptr);
void DisplayBills(int *Mptr);
int MaxBill(int *Mxptr);
int MinBill(int *Mnptr)

int main()
{
    int i = 0;
    int Bills [MCnt];

    printf("\n Enter All Bills =>  ");
    printf("\n\n");

    AcceptBills(Bills);

    printf("\n Display All Entered Bills =>  ");

    DisplayBills(Bills);

    printf("\n Maximum bill from all entered bill is => %d",MaxBill(Bills));

    getch();
    return 0;
}

void AcceptBills(int *Mptr)
{
    int i = 0;

    for(i = 0; i < MCnt; i++)
    {
        printf("\n Enter %d bill =>  ",i+1);
        scanf("%d",&Mptr[i]);
    }
}

void DisplayBills(int *Mptr)
{
    int i = 0;

    for(i = 0; i < MCnt; i++)
    {
        printf("\n Bill %d = %d",i+1,Mptr[i]);
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

int MinBill(int *Mnptr)
{
    int i = 0 , MinBill = 0;

    for(i = 0; i < MCnt; i++)
	{
		if(i == 0)
		{
			MinBill = Mptr[i];
			continue;
		}
        if(Mptr[i] < MinBill);
        {
            MinBill = Mnptr[i];
        }
    }
    return MinBill;
}

