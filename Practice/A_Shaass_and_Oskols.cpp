#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if((x-1) == 0){
            a[x] = a[x] + ((a[x - 1]) - y);
            a[x - 1] = 0;
        }
        else if((x-1) == (n - 1)){
            a[x - 2] = a[x - 2] + (y - 1);
            a[x - 1] = 0;
        }
        else{
            a[x - 2] = a[x - 2] + (y - 1);
            a[x] = a[x] + ((a[x - 1]) - y);
            a[x - 1] = 0;
        }
    }
    for(int i = 0; i < n; i++){
        cout<<a[i]<<endl;
    }
    return 0;
}