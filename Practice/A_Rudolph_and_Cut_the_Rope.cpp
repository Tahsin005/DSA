#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int count = 0;
        cin>>n;
        while(n--){
            int a, b;
            cin>>a>>b;
            if(a>b) count++;
        }
        cout<<count<< endl;
    }
    return 0;
}