#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    stack<int> st;
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        q.push(x);
    }
    while(q.empty() != true){
        int peek = q.front();
        st.push(peek);
        q.pop();
    }
    while(st.empty() != true){
        int crest = st.top();
        q.push(crest);
        st.pop();
    }
    while(q.empty() != true){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}