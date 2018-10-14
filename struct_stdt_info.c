#include<stdio.h>
#include<string.h>
typedef struct
{
    char first[20];
    char last[20];
} nametype;
typedef struct
{
    int id;
    nametype name;
    char grade[5];
} studenttype;
void calculat_grade(studenttype* s,int marks)
{
    if(marks>=80)
    {
        strcpy(s->grade,"A+");
    }
    else if(marks>=70)
    {
        strcpy(s->grade,"A");
    }
    else if(marks>=60)
    {
        strcpy(s->grade,"A-");
    }
    else if(marks>=50)
    {
        strcpy(s->grade,"B");
    }
    else if(marks>=40)
    {
        strcpy(s->grade,"C");
    }
    else
    {
        strcpy(s->grade,"F");
    }
}
int main()
{
    studenttype student[5];
    int marks[5];
    int i,n=5;
    printf("Enter the marks:\n ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&marks[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("Enter the Id %d: ",i+1);
        scanf("%d",&student[i].id);
        printf("Enter the first name for student %d: ",i+1);
        scanf("%s",&student[i].name.first);
        printf("Enter the last name for student %d: ",i+1);
        scanf("%s",&student[i].name.last);
        strcpy(student[i].grade, "");
        printf("\n");
    }
    for(i=0; i<n; i++)
    {
        calculat_grade(&student[i],marks[i]);
    }
    printf("output: \n\n");
    for(i=0; i<n; i++)
    {
        printf("ID %d\n",student[i].id);
        printf("Name: %s %s\n",student[i].name.first,student[i].name.last);
        printf("grade: %s\n",student[i].grade);
    }

    return 0;
}

