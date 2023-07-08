#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st1,st2;
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        st1.push(x);
    }
    while(st1.empty() != true){
        int peek = st1.top();
        st2.push(peek);
        st1.pop();
    }
    while(st2.empty() != true){
        cout<<st2.top()<<" ";
        st2.pop();
    }
    return 0;
}