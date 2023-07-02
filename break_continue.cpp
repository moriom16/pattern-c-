#include<iostream>
using namespace std;
int main(){
    int n,a,b,i;
    cin>>a>>b;
    int sum=0;
    for(n=a; n<b; n++){
        for(i=2;i<n;i++){
            if(n%i==0){
                break;
            }
        }if(i==n){
            sum=sum+1;
            cout<<n<<endl;
        }
    }cout<<sum;

}
