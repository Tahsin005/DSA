#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count;
    int i=0;
    int j=i+1;
    while(i<n-1){
        if(s[i] == s[j]){
            count++;
        }
        i++;
        j++;
    }
    cout<<count;
    return 0;
}