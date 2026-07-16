#include<stdio.h>
#include<conio.h>
int main()
{
    int rollno = 0;
    char name [25] , city [25] , course[25];

    printf("\n enter roll no \n");
    scanf("%d" ,&rollno);

    printf("\n enter student name \n");
    scanf("%s" ,name);

    printf("\n enter the city name \n");
    scanf("%s" ,city);

    printf("\n enter the course name \n");
    scanf("%s" ,course);


    printf("\n student rollno is = %d" , rollno);
    printf("\n student name is = %s" , name);
    printf("\n student city is = %s" , city);
    printf("\n student course is = %s" , course);

    getch();
    return 0;

}
