#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    set<int> s;
    while(t--){
        int n;
        cin>>n;
        while(n--){
            int x;
            cin>>x;
            s.insert(x);
        }
        vector<int> v(s.begin(),s.end());
        reverse(v.begin(),v.end());
        for(int val:v){
            cout<<val<<" ";
        }
        cout<<endl;
        v.clear();
        s.clear();
    }
    return 0;
}