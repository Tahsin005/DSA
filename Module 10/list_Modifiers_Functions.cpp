#include<bits/stdc++.h>
using namespace std;
int main(){
    // list<int> mylist={10,20,30,40,50,60,70};
    list<int> mylist={10,20,30,40,30,30,70};
    // list<int> newList={1,2,3};
    // vector<int> v={9,8,9};
    // list<int> newlist;
    // // newlist=mylist;
    // newlist.assign(mylist.begin(),mylist.end());
    // mylist.push_back(100);
    // mylist.push_front(100);
    // mylist.pop_back();
    // mylist.pop_back();
    // mylist.pop_front();
    // mylist.insert(next(mylist.begin(),2),100);
    // mylist.insert(next(mylist.begin(),2),{1,2,3,4});
    // mylist.insert(next(mylist.begin(),2),newList.begin(),newList.end());
    // mylist.insert(next(mylist.begin(),2),v.begin(),v.end());
    // mylist.erase(next(mylist.begin(),2));
    // mylist.erase(next(mylist.begin(),2),next(mylist.begin(),5));
    // replace(mylist.begin(),mylist.end(),30,100);

    // for(int value:mylist){
    //     cout<<value<<endl;
    // }

    auto it = find(mylist.begin(),mylist.end(),30);
    if(it == mylist.end()){
        cout<<"Not found";
    }
    else{
        cout<<"Found";
    }
    return 0;
}