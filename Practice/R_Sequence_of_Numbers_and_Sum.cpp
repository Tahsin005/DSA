#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    while(cin>>n>>m){
        int sum=0;
        if(n>0 && m>0){
            if(n<m){
                sum=(m*(m+1)/2)-(((n-1)*(n-1+1))/2);
            }
            else if(n>m){
                sum=(n*(n+1)/2)-(((m-1)*(m-1+1))/2);
            }
            if(n<m){
                for(int i=n;i<=m;i++){
                    cout<<i<<" ";
                }
            }
            else if(n>m){
                for(int j=m;j<=n;j++){
                    cout<<j<<" ";
                }
            }
            cout<<"sum ="<<sum<<endl;
        }
        else{
            break;
        }
    }
    return 0;
}