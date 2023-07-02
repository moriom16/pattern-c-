#include<iostream>
using namespace std;
int linear(int n,int a[n],int key){
    for(int i=0;i<n;i++){
        if(a[i]==key){
        cout<<i;
        }
    }return-1;

}
int main(){
    //init Length of Array
    int n;
    cin>>n;
    //init Array
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        cout<<a[i]<<" ";
    }

    int key;
    cin>>key;
    int linear=(n,a[n],key);
    cout<<linear;


}
