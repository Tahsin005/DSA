#include<bits/stdc++.h>
using namespace std;
vector<int> nge(vector<int> &arr){
    int n = arr.size();
    vector<int> output(n,-1);
    stack<int> idx;
    idx.push(0);
    for(int i = 1; i < n; i++){
        while(not idx.empty() and arr[i] > arr[idx.top()]){
            output[idx.top()] = arr[i];
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
    reverse(v.begin(),v.end());
    vector<int> result = nge(v);
    reverse(result.begin(),result.end());
    for(int i = 0; i < result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}