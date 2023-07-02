#include<stdio.h>
int display(int array[])
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d ",array[i]);
    }
}

int max(int array[])
{
    int i;
    int max=array[0];
    for(i=0;i<5;i++)
    {
        if(max<array[i])
        max=array[i];
    }
    printf("\nmax=%d\n",max);
}

int min(int array[])
{
    int i;
    int min=array[0];
    for(i=0;i<5;i++)
    {
        if(min>array[i])
        min=array[i];
    }
    printf("\nmin=%d\n",min);
}

int main()
{
    int array[]={90,120,400,60,920};
    //int i,max,min;
    display(array);
    max(array);
    min(array);
}

