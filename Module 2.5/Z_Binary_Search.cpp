#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q,l;
    cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    while(q){
        cin>>l;
        int flag=0;
        for(int i=0;i<n;i++){
            if(a[i]==l){
                flag=1;
            }
        }
        if(flag==1) cout<<"found"<<endl;
        else cout<<"not found"<<endl;
        q--;
    }
    return 0;
}