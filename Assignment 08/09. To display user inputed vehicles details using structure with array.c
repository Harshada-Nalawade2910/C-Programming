#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Vehicle
{
    char Model_Name[15];
    int Price;
    char Borrow_Month[10];
    char Service_Month[10];
    char Owner_Name[20];
};

int main()
{
    int i = 0;
    struct Vehicle car[3] = {};

    for(i = 0; i < 3; i++)
    {
        printf("\n Enter %d vehicles information \n",i+1);

        fflush(stdin);

        printf("\n Enter the Model name => ");
        scanf("%s",&car[i].Model_Name);     //gets(car[i].Model_Name);

        printf("\n Enter the price of the vehicle => ");
        scanf("%d",&car[i].Price);

        fflush(stdin);

        printf("\n Enter the Vehicle Borrowing Month => ");
        scanf("%s",&car[i].Borrow_Month); //gets(car[i].Borrow_Month);

        fflush(stdin);

        printf("\n Enter the Vehicle Next Servicing Month => ");
        scanf("%s",&car[i].Service_Month); //gets(car[i].Service_Month);

        fflush(stdin);

        printf("\n Enter the Owner name => ");
        scanf("%s",&car[i].Owner_Name);  //gets(car[i].Owner_Name);

        printf("\n\n");
    }

    for(i = 0; i < 3; i++)
    {
        printf("\n The %d vehicles details",i+1);

        printf("\n\n");

        printf("\n Vehicle Model Name = %s",car[i].Model_Name);
        printf("\n Vehicle Price = %d",car[i].Price);
        printf("\n Vehicle Borrow month = %s",car[i].Borrow_Month);
        printf("\n Vehicle Service Month = %s",car[i].Service_Month);
        printf("\n Vehicle Owner Name = %s",car[i].Owner_Name);
    }

    getch();
    return 0;
}



