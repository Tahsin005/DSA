#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int cntmin=0,cntplus=0;
        for(int j=0;j<n;j++){
            if(a[j] == (-1)){
                cntmin++;
            }
            else if(a[j] == 1){
                cntplus++;
            }
        }
        if(cntplus == n){
            cout<<"0"<<endl;
        }
        else if(cntmin < cntplus){
            if(cntmin % 2 == 0){
                cout<<"0"<<endl;
            }
            else{
                cout<<"1"<<endl;
            }
        }
        else if(cntmin == cntplus){
            if(cntmin % 2 == 0){
                cout<<"0"<<endl;
            }
            else{
                cout<<"1"<<endl;
            }
        }
        else{
            int half = n / 2;
            int diff = cntmin - half;
            if(half % 2 != 0){
                diff++;
            }
            cout<<diff<<endl;
        }
    }
    return 0;
}