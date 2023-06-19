#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int a[n];
        int Mihai=0,Bianca=0; 
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++)   {
            if(a[i]%2 == 0){
                Mihai+=a[i];
            }
            else if(a[i]%2 != 0){
                Bianca+=a[i];
            }
        }
        if(Mihai>Bianca) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}