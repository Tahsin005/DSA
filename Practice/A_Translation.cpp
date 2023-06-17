#include<bits/stdc++.h>
using namespace std;
int main(){
    string t,s;
    cin>>t;
    cin>>s;
    reverse(t.begin(),t.end());
    int result = t.compare(s);
    if(result < 0){
        cout<<"NO";
    } 
    else if(result > 0){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;
}