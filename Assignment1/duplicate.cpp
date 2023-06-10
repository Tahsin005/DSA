#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);

    bool flag=true;
    for(int i = 1; i < n; i++){
        if(a[i]==a[i-1]){
            flag=false;
            break;
        }
    }
    if(flag==true) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}