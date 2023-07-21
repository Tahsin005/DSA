#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin>>v[i];
        }

        map<int,int> mp;
        for(int i = 0; i < n; i++){
            mp[v[i]]++;
        }

        int count = 0;
        int mostCount = v[0];
        for(auto val:mp){
            if(val.second > count){
                count = val.second;
                mostCount = val.first;
            }
            else if((val.second == count && val.first > mostCount)){
                count = val.second;
                mostCount = val.first;
            }
        }
        cout<<mostCount<<" "<<count<<endl;
    }
    return 0;
}