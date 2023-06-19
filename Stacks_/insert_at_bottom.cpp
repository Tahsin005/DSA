#include<bits/stdc++.h>
using namespace std;

void insert_at_bottom(stack<int> &st,int x){
    stack<int> temp;
    /*
    TIME COMPLEXITY = O(N)
    SPACE COMPLEXITY = 0(N)
    */
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

void f(stack<int> &st,int x){
    if(st.empty()){
        st.push(x);
        return;
    }
    int curr = st.top();
    st.pop();
    f(st,x);
    st.push(curr);
}
int main(){
    stack<int> st;
    // st.push(1);
    // st.push(2);
    // st.push(3);
    // st.push(4);
    // st.push(5);
    while(true){
        int value;
        cin>>value;
        if(value==(-1)){
            break;
        }
        st.push(value);
    }
    // insert_at_bottom(st,100);
    int x;
    cin>>x;
    f(st,x);
    while(!st.empty()){
        int curr = st.top();
        st.pop();
        cout<<curr<<endl;
    }
    return 0;
}