#include<iostream>
using namespace std;
int main(){
    int n,row,col;
    cin>>n;
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            cout<<col<<" ";
        }
        for(col=1;col<=n-row;col++){
            cout<<" ";
        }//cout<<endl;


        for(col=1;col<=n-row;col++){
            cout<<" ";
        }
        for(col=1;col<=row;col++){
            cout<<"* ";
        }cout<<endl;
    }
    //lower part
    for(row=n-1; row>=1; row--){
        for(col=n-1; col<=n-row; col++){
            cout<<"* ";
        }
    }

}
