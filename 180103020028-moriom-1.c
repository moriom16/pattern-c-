#include<stdio.h>

int Lmax(int a[],int n)
{
    int i;

    if (n==1)
        return 1;

    else if (a[n]>=a[n+1])
        return n;

    else if (a[n]>=a[n-1])
        return n;

    for(i=1; i<n; i++){
        if(a[i] >= a[i-1] && a[i+1] <= a[i])
            return i;
    }

}
int main(){
    int a ={1,2,3,5,10};
    int n =sizeof(a)/sizeof(a[0]);
    int max= Lmax(a,n);
    print("%d",max);

}
