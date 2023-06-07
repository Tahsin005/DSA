#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q,l,r;
    cin>>n>>q;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    while(q){
        cin>>l>>r;
        int sum=0;
        l--,r--;
        for(int i=l;i<=r;i++){
            sum=sum+a[i];
        }
        cout<<sum<<endl;
        q--;
    }
    return 0;
}