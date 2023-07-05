#include<bits/stdc++.h>
using namespace std;
/*
Time complexity - O(N)
Space complexity - O(N)
*/
bool isValid(string str){
    stack<char> st;
    for(int i=0; i<str.size(); i++){
        char ch = str[i];
        if(ch == '(' or ch == '{' or ch == '['){
            st.push(ch);
        }
        else{
            if(ch == ')' and !st.empty() and st.top() == '('){
                st.pop();
            }
            else if(ch == '}' and !st.empty() and st.top() == '{'){
                st.pop();
            }
            else if(ch == ']' and !st.empty() and st.top() == '['){
                st.pop();
            }
            else{
                return false;
            }
        }
    }
    return st.empty();
}
int main(){
    string str;
    cin>>str;
    if(isValid(str)) cout<<"Balanced bracket"<<endl;
    else cout<<"Not balanced bracket"<<endl;
    return 0;
}