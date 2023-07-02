#include<stdio.h>
union test1
{
    int age;
    float salary;
};

union test2
{
    char x;
};
union test3
{
    char x;
    char y;
    double dd;
};
struct character
{
   // int x;
   // int y;
   // double d;
    char ch;
};

int main()
{
    union test1 t1;
    union test2 t2;
    union test3 t3;
    struct character ch;


    printf("t1=%d\n",sizeof(t1));
    printf("t2=%d\n",sizeof(t2));
    printf("t3=%d\n",sizeof(t3));
    printf("ch=%d\n",sizeof(ch));


}
