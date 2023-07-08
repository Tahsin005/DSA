#include<bits/stdc++.h>
using namespace std;
int histogram(vector<int> &v){
    int n = v.size();
    stack<int> idx;
    int ans = INT_MIN;
    idx.push(0);
    for(int i = 1; i < n; i++){
        while(not idx.empty() and v[i] < v[idx.top()]){
            int bar_length = v[idx.top()];
            idx.pop();
            int next_smaller_element = i;
            int previous_smaller_element = (idx.empty())? -1 : idx.top();
            ans = max(ans , bar_length * (next_smaller_element - previous_smaller_element -1));
        }
        idx.push(i);
    }
    while(not idx.empty()){
        int bar_length = v[idx.top()];
        idx.pop();
        int next_smaller_element = n;
        int previous_smaller_element = (idx.empty())? -1 : idx.top();
        ans = max(ans , bar_length * (next_smaller_element - previous_smaller_element -1));
    }
    return ans;
// 13
// 2 1 5 6 2 3 0 2 1 5 6 2 3
// 10
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
    int ans = histogram(v);
    cout<<ans<<endl;
    return 0;
}