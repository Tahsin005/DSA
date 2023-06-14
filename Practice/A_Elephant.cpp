#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;

    int steps = (x ) / 5;
    if(x%5 == 0){
    cout<<steps<<endl;

    }
    else{

    cout<<steps + 1<<endl;
    }

    return 0;
}