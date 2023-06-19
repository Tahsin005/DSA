#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> mylist = {10,20,30};
    // cout<<mylist.max_size()<<endl;
    // mylist.clear();
    mylist.resize(2);
    mylist.resize(6,69);
    cout<<mylist.size()<<endl;
    for(int value: mylist){
        cout<<value<<endl;
    }
    return 0;
}