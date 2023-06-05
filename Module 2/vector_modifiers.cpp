#include<bits/stdc++.h>
using namespace std;
int main(){
    // vector<int> x={1,2,3};
    // vector<int> x={1,2,3,1,2,3};
    // vector<int> v={5,6,7};
    // // v=x; // O(1) --> because boths size is same
    // v=x; // O(N) --> because boths size is different
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }

    /*vector pop_back*/
    vector<int> x={1,2,3,1,2,3};
    x.pop_back();
    for(int i=0;i<x.size();i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
    x.pop_back();
    for(int i=0;i<x.size();i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
    x.pop_back();
    for(int i=0;i<x.size();i++){
        cout<<x[i]<<" ";
    }
    return 0;
}