#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string a;
    cin>>n;
    while(n--){
        cin>>a;
        int x=a.length();
        if(x>10){
            cout<<a[0]<<(x-2)<<a[x-1]<<endl;
        }
        else if(x<=10){
            cout<<a<<endl;
        }
    }
    return 0;
}