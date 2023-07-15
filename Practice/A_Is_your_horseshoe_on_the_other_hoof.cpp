#include<bits/stdc++.h>
using namespace std;
int main(){
    // long long int s1,s2,s3,s4;
    // cin>>s1>>s2>>s3>>s4;
    long long int a[4];
    for(int i = 0; i < 4; i++){
        cin>>a[i];
    }
    int count = 0;
    for(int i = 0; i < 4; i++){
        for(int j = i + 1; j < 4; j++){
            if(a[i] == a[j]){
                count++;
                break;
            }
        }
    }
    cout<<count;
    return 0;
}