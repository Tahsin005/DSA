#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b) == c){
            cout<<"+"<<endl;
        }
        else if((a-b) == c){
            cout<<"-"<<endl;
        }
    }
    return 0;
}