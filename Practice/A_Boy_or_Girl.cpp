#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cnt[26]={0};
    for(int i=0;i<s.length();i++){
        int value = s[i] - 'a';
        cnt[value]++;
    }
    int count=0;
    for(int i=0;i<26;i++){
        if(cnt[i]!=0){
            count++;
        }
    }
    if(count%2 != 0) cout<<"IGNORE HIM!";
    else cout<<"CHAT WITH HER!";
    return 0;
    }