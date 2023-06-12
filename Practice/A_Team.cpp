#include<bits/stdc++.h>
using namespace std;
int main(){
    int test,a,b,c;
    cin>>test;
    int cnt=0;
    while(test--){
        cin>>a>>b>>c;
        if((a==1 &&  b==1 &&  c==1)){
            cnt++;
        }
        else if((a==1 && b==1 && c==0)){
            cnt++;
        }
        else if((a==1 && b==0 && c==1)){
            cnt++;
        }
        else if((a==0 && b==1 && c==1)){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}