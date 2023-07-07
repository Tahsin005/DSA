#include<bits/stdc++.h>
using namespace std;
vector<int> nse(vector<int> &v){
    int n = v.size();
    vector<int> output(n,-1);
    stack<int> idx;
    idx.push(0);
    for(int i = 1; i < n; i++){
        if(not idx.empty() and v[i] < v[idx.top()]){
            output[idx.top()] = v[i];
            idx.pop();
        }
        idx.push(i);
    }
    return output;
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    while(n--){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> result = nse(v);
    for(int i = 0; i < result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}