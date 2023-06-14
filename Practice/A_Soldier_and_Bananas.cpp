#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w,sum=0,i=1;
    cin>>k>>n>>w;
    while(w--){
        sum= sum + k*i;
        i++;
    }
    if(sum>n){
        cout<<sum-n;
    }
    else{
        cout<<0;
    }
    return 0;
}