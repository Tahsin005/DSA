#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> mp;
    // mp.insert({"tahsin",05});
    // mp.insert({"messi",10});
    // mp.insert({"bushi",05});
    // mp.insert({"neymar",11});
    // mp.insert({"suarez",9});
    // mp.insert({"xavi",8});
    // mp.insert({"akib",0});

    mp["tahsin"] = 5;
    mp["messi"] = 10;
    mp["bushi"] = 05;
    for(auto it = mp.begin(); it != mp.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    // cout<<mp["neymar"]<<endl;
    // if(mp.count("akib")){
    //     cout<<"Ase"<<endl;
    // }
    // else{
    //     cout<<"Nai"<<endl;
    // }
    return 0;
}