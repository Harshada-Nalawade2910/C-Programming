#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Stud
{
    int RollNo;
    char Name[20];
    float Per;
    char Grade;
};

int main()
{
    // 1st Student

    struct Stud S1 = {}, S2 = {}, S3 = {}, S4 = {};   // structure Instance/object/variable

    printf("\n Enter 1st Student Roll Number => ");
    scanf("%d",&S1.RollNo);

    fflush(stdin);

    printf("\n Enter  1st Student Name => ");
    gets(S1.Name);   //scanf("%s",&Name);

    printf("\n Enter 1st Student Percentage => ");
    scanf("%f",&S1.Per);

    fflush(stdin);

    printf("\n Enter  1st student Grade =>");
    S1.Grade = getche();// scanf("%c",&Grade);

/////////////////////////////////////////////////////////////////////////////////////////

   // 2nd Student

    printf("\n Enter Student Roll Number => ");
    scanf("%d",&S2.RollNo);

    fflush(stdin);

    printf("\n Enter Student Name => ");
    gets(S2.Name);   //scanf("%s",&S2.Name);

    printf("\n Enter Student Percentage => ");
    scanf("\%f",&S2.Per);

    fflush(stdin);

    printf("\n Enter student Grade =>");
    S2.Grade= getche();// scanf("%c",&Grade);

    printf("\n\n");

/////////////////////////////////////////////////////////////////////////////////////////

    //3rd student

    printf("\n 3rd Student details are => \n");

    printf("\n Enter Student Roll Number => ");
    scanf("%d",&S3.RollNo);

    fflush(stdin);

    printf("\n Enter Student Name => ");
    gets(S3.Name);   //scanf("%s",&Name);

    printf("\n Enter Student Percentage => ");
    scanf("\%f",&S3.Per);

    fflush(stdin);

    printf("\n Enter student Grade =>");
    S3.Grade = getche();// scanf("%c",&S3.Grade);

    printf("\n\n");

//////////////////////////////////////////////////////////////////////////////////

    //4th student


    printf("\n 4th Student details are => \n");


    printf("\n Enter 4th Student Roll Number => ");
    scanf("%d",&S4.RollNo);

    fflush(stdin);

    printf("\n Enter 4th Student Name => ");
    gets(S4.Name);   //scanf("%s",&Name);

    printf("\n Enter 4th Student Percentage => ");
    scanf("\%f",&S4.Per);

    fflush(stdin);

    printf("\n Enter 4th student Grade =>");
    S4.Grade = getche();// scanf("%c",&S4.Grade);

    printf("\n\n");



    printf("\n 1st Student Details Are as Follows => \n ");

    printf("\n Roll no = %d", S1.RollNo);
    printf("\n Name    = %s", S1.Name);
    printf("\n Percentage = %0.2f", S1.Per);
    printf("\n Grade      = %c", S1.Grade);

    printf("\n\n");


    printf("\n 2nd Student details are as follows => \n");

    printf("\n Roll no = %d", S2.RollNo);
    printf("\n Name    = %s", S2.Name);
    printf("\n Percentage = %0.2f", S2.Per);
    printf("\n Grade      = %c", S2.Grade);

    printf("\n\n");


    printf("\n 3rd Student details are as follows => \n");

    printf("\n Roll no = %d", S3.RollNo);
    printf("\n Name    = %s", S3.Name);
    printf("\n Percentage = %0.2f", S3.Per);
    printf("\n Grade      = %c", S3.Grade);

    printf("\n\n");


    printf("\n 4th Student details are as follows => \n");

    printf("\n Roll no = %d", S4.RollNo);
    printf("\n Name    = %s", S4.Name);
    printf("\n Percentage = %0.2f", S4.Per);
    printf("\n Grade      = %c", S4.Grade);

    getch();
    return 0;
}
