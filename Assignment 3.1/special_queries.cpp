#include<bits/stdc++.h>
using namespace std;
int main(){
    int queries;
    cin>>queries;
    queue<string> q;
    while(queries--){
        int n;
        string s;
        cin>>n;
        if(n == 0 ){
            cin>>s;
            q.push(s);
        }
        else if(n == 1){
            if(!q.empty()){
                cout<<q.front()<<endl;
                q.pop();
            }
            else{
                cout<<"Invalid"<<endl;
            }
        }
    }
    return 0;
}