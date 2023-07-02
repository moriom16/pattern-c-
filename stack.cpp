#include<bits/stdc++.h>
using namespace std;
int main()
{
    //crete stack,insert element
    stack<int>s;
    s.push(2);
    s.push(3);
    s.push(5);
    //create quesue,insert element
    queue<string>q;
    q.push("abc");
    q.push("abcd");
    q.push("efg");
    //print from stack
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    //print from queue
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }


}
