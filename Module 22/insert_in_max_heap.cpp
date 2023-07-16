#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        v.push_back(x);
        int curr_idx = v.size() - 1;
        while(curr_idx != 0){
            int parent_idx = (curr_idx - 1) / 2;
            if(v[parent_idx] < v[curr_idx]){
                swap(v[parent_idx],v[curr_idx]);
            }
            else{
                break;
            }
            curr_idx = parent_idx;
        }
    }
    for(int val: v) cout<<val<<" ";
    /*
    For inserting one value the time complexity is - O(height/logN)
    In the case of inserting "n" values, time complexity becomes - O(N * height/logN)
    */
    return 0; 
}