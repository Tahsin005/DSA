#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    char check[11] = "codeforces";
    while(test--){
        char s[11];
        cin>>s;
        int count=0;
        for(int i=0;i<strlen(s);i++){
            if(s[i] != check[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}