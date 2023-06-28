#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int start = 0;
        int end = n - 1;
        int cycles = 0;
        while(start<end){
            if(s[start] == '0' && s[end] == '1'){
                cycles++;
            }
            else if(s[start] == '1' && s[end] == '0'){
                cycles++;
            }
            else{
                break;
            }
            start++;
            end--;
        }
        cout<<n-(cycles * 2)<<endl;
    }
    return 0;
}