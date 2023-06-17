#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    int res[n];
    res[0]=b[0]-a[0];
    for(int i=1;i<n;i++){
        res[i]=res[i-1]-a[i]+b[i];
    }
    sort(res,res+n,greater<int>());
    cout<<res[0];
    return 0;
}