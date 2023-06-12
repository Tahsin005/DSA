#include<bits/stdc++.h>
using namespace std;
int main(){
    int test,x=0;
    char a,b,c;
    cin>>test;
    while(test--){
        cin>>a>>b>>c;
        if(a == '+' || b == '+' || c == '+'){
            x++;
        }
        else if(a == '-' || b == '-' || c == '-'){
            x--;
        }
    }
    cout<<x;
    return 0;
}