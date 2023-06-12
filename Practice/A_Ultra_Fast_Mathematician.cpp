#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b,c;
    cin>>a>>b;
    for(int i=0;i<a.length();i++){
        if((a[i] == '0' && b[i] == '1') || (a[i] == '1' && b[i] == '0')){
            c.push_back('1');
        }
        else if((a[i] == '0' && b[i] == '0') || (a[i] == '1' && b[i] == '1')){
            // c[i]='0';
            c.push_back('0');
        }
    }
    for(int i=0;i<a.length();i++){
        cout<<c[i];
    }
    return 0;
}