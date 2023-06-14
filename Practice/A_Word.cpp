#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cnt_uc=0,cnt_lc=0;
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z'){
            cnt_lc++;
        }
        else if(s[i]>='A' && s[i]<='Z'){
            cnt_uc++;
        }
    }
    if(cnt_lc == cnt_uc){
        for(int i=0;i<s.length();i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i] = s[i] - 'A' + 'a';
            }
        }
        cout<<s;
    }
    else if(cnt_lc>cnt_uc){
        for(int i=0;i<s.length();i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i] = s[i] - 'A' + 'a';
            }
        }
        cout<<s;
    }
    else if(cnt_lc<cnt_uc){
        for(int i=0;i<s.length();i++){
            if(s[i]>='a' && s[i]<='z'){
                s[i] = s[i] - 'a' + 'A';
            }
        }
        cout<<s;
    }
    return 0;
}