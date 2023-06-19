#include<bits/stdc++.h>
using namespace std;
void removerAtBottom(stack<int> &st){
    stack<int> temp;
    while(st.size() != 1){
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    st.pop();
    while(!temp.empty()){
        int curr = temp.top();
        temp.pop();
        st.push(curr);
    }
}

void f(stack<int> &st){
    if(st.size() == 1){
        st.pop()        ;
        return;
    }
    int curr = st.top();
    st.pop();
    f(st);
    st.push(curr);
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
    // removerAtBottom(st);
    f(st);
    while(!st.empty()){
        int curr = st.top();
        st.pop();
        cout<<curr<<endl;
    }
    return 0;
}