#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,count=1;
    cin>>a>>b;
    while(true){
        a = a * 3;
        b = b * 2;
        if(a<=b){
            count++;
        }
        else{
            break;
        }
    }
    cout<<count;
    return 0;
}