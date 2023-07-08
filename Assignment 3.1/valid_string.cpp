#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        stack<char> st;
        for(int i = 0; i < s.length(); i++){
            char ch = s[i];
            if(ch == 'A'){
                if(!st.empty() && st.top() == 'B'){
                    st.pop();
                }
                else{
                    st.push(ch);
                }
            } 
            else if(ch == 'B'){
                if(!st.empty() && st.top() == 'A'){
                    st.pop();
                }
                else{
                    st.push(ch);
                }
            }
        }
        if(st.empty()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}