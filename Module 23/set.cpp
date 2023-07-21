#include<bits/stdc++.h>
using namespace std;
int main(){
    /*
    A binary search tree is a data structure where each node has at most two children, 
    and the elements are stored in a way that allows for quick searching, insertion, 
    and deletion operations. In the case of std::set, 
    the binary search tree property is used to maintain the elements in sorted order, 
    which allows for efficient lookup and iteration.
    */
    set<int> s;// stl of a balanced binary tree
    int n;
    cin>>n;
    while(n--){ // O(N logN)
        int x;
        cin>>x;
        s.insert(x);// O(logN)
    }
    if(s.count(10)) cout<<"Yes"<<endl; // O(logN)
    else cout<<"No"<<endl;
    
    for(auto it = s.begin(); it != s.end(); it++){
        cout<<*it<<endl;
    }
    return 0;
}