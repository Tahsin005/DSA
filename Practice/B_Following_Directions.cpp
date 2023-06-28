#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x=0,y=0;
        cin>>n;
        char s[n];
        // cin>>s;
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        bool flag = false;
        for(int i=0;i<n;i++){
            if(x == 1 && y == 1){
                flag = true;
                break;
            }
            else if(s[i] == 'U'){
                y++;
            }
            else if(s[i] == 'R'){
                x++;
            }
            else if(s[i] == 'D'){
                y--;
            }
            else if(s[i] == 'L'){
                x--;
            }
            if(x == 1 && y == 1){
                flag = true;
                break;
            }
        }
        if(flag == true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}