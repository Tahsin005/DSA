#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        long long int a, b, k;
        cin>>a>>b>>k;

        long long int position = 0;
        long long int cycles = k / 2;
        
        if(k % 2 == 0){
            position = (a - b) * cycles;
        } 
        else{
            position = (a - b) * cycles + a;
        }
        cout<<position<<endl;
    }
    return 0;
}