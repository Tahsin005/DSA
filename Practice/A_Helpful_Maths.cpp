#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.length();
    sort(s.begin(),s.end(),greater<int>());
    sort(s.begin(),s.begin()+(n/2)+1);
    for(int i=0;i<((n/2)+1);i++){
        cout<<s[i];
        if(i<((n/2)+1)-1){
            cout<<"+";
        }
    }
    return 0;
}