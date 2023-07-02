#include<stdio.h>
struct person{
    char name[50];
    int age;
    float salary;
};

int main()
{
    struct person person[5];
    int i;

    for(i=0;i<4;i++)
    {
        printf("Enter Info about person %d:\n",i+1);
        printf("Name: ");
        fflush(stdin);
        gets(person[i].name);
        printf("Age: ");
        scanf("%d",&person[i].age);
        printf("Salary: ");
        scanf("%f",&person[i].salary);
    }

    for(i=0;i<4;i++)
    {
        printf("Enter Info about %d\n",i+1);
        printf("Name:%s\n",person[i].name);
        printf("Age:%d\n",person[i].age);
        printf("Salary:%f\n",person[i].salary);
    }



}
