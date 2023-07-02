#include<stdio.h>
struct person
{
    char name[50];
    int age;
    float salary;
};
void display(struct person p)
{
    printf("%s\n",p.name);
    printf("%d\n",p.age);
    printf("%f\n",p.salary);
}
int main()
{
    struct person person1,person2;
    strcpy(person1.name,"Tasnia Akter");
    person1.age=22;
    person1.salary=1250.50;
    display(person1);


    strcpy(person2.name,"Moriom Akter");
    person2.age=22;
    person2.salary=15000.50;
    display(person2);
}
