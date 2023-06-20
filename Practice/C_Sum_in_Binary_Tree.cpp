#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        long long int n;
        cin>>n;
        long long int sum=0;
        while(n){
            sum+=n;
            n/=2;
        }
        cout<<sum<<endl;
    }
    return 0;
}