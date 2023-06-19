#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> mylist={10,20,30,40,50,10,10};
    // mylist.remove(10);
    // mylist.sort();
    // mylist.sort(greater<int>());
    // mylist.unique(); // list should be sorted: otherwise won't work
    mylist.reverse();
    for(int value: mylist){
        cout<<value<<endl;
    }
    return 0;
}