#include<stdio.h>
struct student
{
    int roll_no;
    char name[100];
    int per;
}s[50];
void main()
{
    int i,n;
    printf("\n enter how many record do you want to display:");
    scanf("%d",&n);
    printf("\n ENTER THE STUDENT DETAILS :->");
    for(i=0;i<n;i++)
    {
        printf("\n ENTER NAME :");
        scanf("%s",s[i].name);
        printf("\n ENTER ROLL NUMBER OF THE STUDENT :->");
        scanf("%d",&s[i].roll_no);
        printf("\n ENTER THE PERCENTAGE OF THE STUDENT :->");
        scanf("%d",&s[i].per);
    }
    printf("\n********-display details of the student-**********");
    printf("\nRoll_NO\t\t Student name\t\t  Percentage \t\t");
    for(i=0;i<n;i++)
    printf("\n %d\t\t\t %s \t\t\t %d\t\t",s[i].roll_no,s[i].name,s[i].per);
}