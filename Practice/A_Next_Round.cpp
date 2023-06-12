#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,cnt=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int check_point=a[k-1];
    for(int i=0;i<n;i++){
        if(a[i] != 0){
            if(a[i]>=check_point){
            cnt++;
            }
        }
        
    }
    cout<<cnt;
    return 0;
}