#include<bits/stdc++.h>
using namespace std;
void reverse(stack<int> &st){
    stack<int> t1,t2;
    while(!st.empty()){
        int curr = st.top();
        st.pop();
        t1.push(curr);
    }
    while(!t1.empty()){
        int curr = t1.top();
        t1.pop();
        t2.push(curr);
    }
    while(!t2.empty()){
        int curr = t2.top();
        t2.pop();
        st.push(curr);
    }
}
void insert_at_bottom(stack<int> &st,int x){
    stack<int> temp;
    while(!st.empty()){
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
void f(stack<int> &st){
    if(st.empty()){
        return;
    }
    int curr = st.top();
    st.pop();
    f(st);
    insert_at_bottom(st,curr);
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
    // reverse(st);
    f(st);
    while(!st.empty()){
        int curr = st.top();
        st.pop();
        cout<<curr<<endl;
    }
    return 0;
}