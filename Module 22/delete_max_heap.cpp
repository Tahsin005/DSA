#include<bits/stdc++.h>
using namespace std;
void insert_heap(vector<int> &v,int x){
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
void delete_heap(vector<int> &v){
    v[0] = v[v.size() - 1];
    v.pop_back();
    int curr_idx = 0;
    while(true){
        int left_idx = curr_idx * 2 + 1;
        int right_idx = curr_idx * 2 + 2;
        int last_idx = v.size() - 1;
        if(left_idx <= last_idx && right_idx <= last_idx){
            if(v[left_idx] >= v[right_idx] && v[left_idx] > v[curr_idx]){
                swap(v[left_idx],v[curr_idx]);
                curr_idx = left_idx;
            }
            else if(v[right_idx] >= v[left_idx] && v[right_idx] > v[curr_idx]){
                swap(v[right_idx],v[curr_idx]);
                curr_idx = right_idx;
            }
            else{
                break;
            }
        }
        else if(left_idx <= last_idx){
            if(v[left_idx] > v[curr_idx]){
                swap(v[left_idx],v[curr_idx]);
                curr_idx = left_idx;
            }
            else{
                break;
            }
        }
        else if(right_idx <= last_idx){
            if(v[right_idx] > v[curr_idx]){
                swap(v[right_idx],v[curr_idx]);
                curr_idx = right_idx;
            }
            else{
                break;
            }

        }
        else{
            break;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        insert_heap(v,x);
    }
    delete_heap(v);
    for(int val: v) cout<<val<<" ";
    cout<<endl;
    return 0; 
}