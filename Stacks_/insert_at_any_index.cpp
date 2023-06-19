#include<bits/stdc++.h>
using namespace std;
void insertatidx(stack<int> &st,int x,int idx){
    stack<int> temp;
    int n=st.size();
    int count=n-idx;
    while(count--){
        // count++;
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    st.push(x);
    while(!temp.empty()){
        int curr = temp.top();
        temp.pop();
        st.push(curr);
    }
}
int main(){
    stack<int> st;
    while(true){
        int value;
        cin>>value;
        if(value==(-1)){
            break;
        }
        st.push(value);
    }
    int x,idx;
    cin>>x>>idx;
    insertatidx(st,x,idx);
    while(!st.empty()){
        int curr = st.top();
        st.pop();
        cout<<curr<<endl;
    }
    return 0;
}