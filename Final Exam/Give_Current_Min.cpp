#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n;

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }

    cin>>q;
    priority_queue<int,vector<int>,greater<int>> pq;
    while(v.size() != 0){
        int x = v.back();
        pq.push(x);
        v.pop_back();
    }
    while(q--){
        int c;
        cin>>c;
        if(c == 0){
            int x;
            cin>>x;
            pq.push(x);
            cout<<pq.top()<<endl;
        }
        else if(c == 1){
            if(pq.empty()){
                cout<<"Empty"<<endl;
            }
            else{
                cout<<pq.top()<<endl;
            }
        }
        else if(c == 2){
            if(pq.empty()){
                cout<<"Empty"<<endl;
            }
            else{
                pq.pop();
                if(pq.empty()){
                    cout<<"Empty"<<endl;
                }
                else {
                    cout<<pq.top()<<endl;
                }
            }
        }
    }
    return 0;
}
