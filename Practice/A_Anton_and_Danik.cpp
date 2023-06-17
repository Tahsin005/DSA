#include<bits/stdc++.h>
using namespace std;
int main(){
    // string s;
    // cin>>s;
    int n;
    cin>>n;
    char s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int cntA=0,cntB=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            cntA++;
        }
        else if(s[i]=='D'){
            cntB++;
        }
    }
    if(cntA==cntB) cout<<"Friendship";
    else if(cntA>cntB) cout<<"Anton";
    else if(cntA<cntB) cout<<"Danik";
    return 0;
}