#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        st.push(x);
    }
    queue<int> q;
    int m;
    cin>>m;
    while(m--){
        int y;
        cin>>y;
        q.push(y);
    }
    bool flag = true;
    if(st.size() != q.size()){
        cout<<"NO";
    }
    else{
        while(st.empty() != true){
            if(st.top() == q.front()){
                st.pop();
                q.pop();
            }
            else{
                flag = false;
                break;
            }
        }
        (flag == true)? cout<<"YES":cout<<"NO";
    }
    return 0;
}