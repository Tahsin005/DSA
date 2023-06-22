#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> mylist;
    while(true){
        int value;
        cin>>value;
        if(value == (-1)){
            break;
        }
        else{
            mylist.push_back(value);
        }
    }
    mylist.sort();
    mylist.unique();
    for(int value : mylist){
        cout<<value<<" ";
    }
    return 0;
}