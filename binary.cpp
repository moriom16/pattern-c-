#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    for (int i=0;i<n; i++){
        cin>>a[i];
        cout<<a[i]<<" ";
    }

    int key;
    cin>>key;

    int start=a[0];
    int last=a[n];
    while(start<=last){
        int mid=(start+last)/2;

        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>key){
            last=mid-1;
        }
        else{
            start=mid+1;
        }
    }


}



