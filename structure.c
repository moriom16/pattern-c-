#include<stdio.h>
//global structure
struct person
{
    int age;
    float salary;
};
int main()
{
    struct person person1,person2;
    scanf("%d %f",&person1.age,&person1.salary);

    printf(" Age=%d\n salary=%f\n",person1.age,person1.salary);


    getch();
}
