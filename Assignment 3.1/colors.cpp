#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    stack<char> st,res,final;
    while(t--){
        int n;
        cin>>n;

        string rgb;
        cin>>rgb;


        for(int i = 0; i < rgb.length(); i++){
            char color = rgb[i];

            if(!st.empty()){
                char topColor = st.top();
                if((topColor == 'R' && color == 'B') || (topColor == 'B' && color == 'R')){
                    res.push('P');
                    st.pop();
                }
                else if((topColor == 'R' && color == 'G') || (topColor == 'G' && color == 'R')){
                    res.push('Y');
                    st.pop();
                }
                else if((topColor == 'B' && color == 'G') || (topColor == 'G' && color == 'B')){
                    res.push('C');
                    st.pop();
                }
                else{ 
                    if(st.top() == color){
                        st.pop();
                    }
                }
            }
            else{
                if(i == rgb.size() - 1){
                    res.push(rgb[i]);
                }
                else{
                    st.push(color);
                }
            }
        }
        while(!res.empty()){
            if(final.empty()){
                final.push(res.top());
                res.pop();
            }
            else{
                char color = res.top();
                if(color == final.top()){
                    res.pop();
                    final.pop();
                }
                else{
                    final.push(color);
                    res.pop();
                }
            }
        }
        string copiedString = "";

        while(!final.empty()){
            copiedString += final.top();
            final.pop();
        }

        cout<<copiedString;
        cout<<endl;
    }
    return 0;
}