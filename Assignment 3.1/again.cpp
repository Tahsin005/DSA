#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    queue<int> q;
    int n,m;
    cin>>n>>m;
    while(n--){
        int x;
        cin>>x;
        st.push(x);
    }
    while(m--){
        int x;
        cin>>x;
        q.push(x);
    }
    list<int> stlist,qlist;
    while(st.empty() != true){
        stlist.push_back(st.top());
        st.pop();
    }
    while(q.empty() != true){
        qlist.push_back(q.front());
        q.pop();
    }
    if(stlist == qlist) cout<<"YES";
    else cout<<"NO";
    return 0;
}