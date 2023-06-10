#include<bits/stdc++.h>
using namespace std;
int main(){
    // string s;
    // cin>>s;
    char ch;
    vector<int>cnt(26,0);
    // for(int i=0;i<s.size();i++){
    //     int value=s[i]-'a';
    //     cnt[value]++;
    // }
    while(scanf("%c",&ch)!=EOF){
        int value=ch-'a';
        cnt[value]++;
    }
    for(char i='a';i<='z';i++){
        // if(cnt[i]>0){
            cout<<i<<" : "<<cnt[i]<<endl;
        // }
    }
    return 0;
}
