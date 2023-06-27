#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,m;
        cin>>n>>m;
        long long int a[n];
        long long int suma = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            suma+=a[i];
        }
        long long int b[m];
        long long int sumb = 0;
        for(int i=0;i<m;i++){
            cin>>b[i];
            sumb+=b[i];
        }
        if(suma > sumb) cout<<"Tsondu"<<endl;
        else if(suma < sumb) cout<<"Tenzing"<<endl;
        else cout<<"Draw"<<endl;
    }
    return 0;
}