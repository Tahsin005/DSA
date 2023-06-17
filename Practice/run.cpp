#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    cin>>name;
    if(name[0]=='A' && name[name.length()-1]=='A'){
        cout<<"Rest In Peace";
    }
    else if(name[0]=='A'){
        cout<<"Dangerous";
    }
    else if(name[name.length()-1] == 'A'){
        cout<<"Run!";
    }
    return 0;
}