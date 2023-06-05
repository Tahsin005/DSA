#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,6,7,3,2,6,5,3,2};
    // vector<int>:: iterator it;
    auto it=find(v.begin(),v.end(),88);
    // cout<<*it;
    if(it == v.end()) cout<<"Not Found";
    else cout<<"Found";
    return 0;
}