#include<stdio.h>
struct student
{
    int roll_no;
    char name[100];
    float per;
}s;
void main()
{
    printf("\n enter roll number of the student :");
    scanf("%d",&s.roll_no);
    printf("\n enter name of the student :");
    scanf("%s",s.name);
    printf("\n enter the percentage of the student :");
    scanf("%f",&s.per);

    printf("\n********details of the students*********");
    printf("\n-------------------------------------------------------------------");
    printf("\nROLL_NO\t\t\tSTUDENT NAME\t\t\tPERCENTAGE OF STUDENT:\t");
    printf("\n%d\t\t   %s \t\t \t %f \t\t\t",s.roll_no,s.name,s.per);
}