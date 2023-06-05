#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    // cout<<v.max_size()<<endl;
    // cout<<v.capacity()<<endl;
    v.push_back(1);
    // cout<<v.capacity()<<endl;
    v.push_back(2);
    // cout<<v.capacity()<<endl;
    v.push_back(3);
    // cout<<v.capacity()<<endl;
    v.push_back(4);
    // cout<<v.capacity()<<endl;
    v.push_back(5);
    // cout<<v.capacity()<<endl;
    // v.clear(); 
    // // N.B: it only clears the size of the vector, not its elements
    // // so if you want to access its value you can access it later
    v.resize(3);
    v.resize(7,69);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    // cout<<v[3]<<endl;
    
    return 0;
}