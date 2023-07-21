#include<bits/stdc++.h>
using namespace std;
/*
Behind the scene it is heap
*/
int main(){
    // priority_queue<int> pq;// max heap
    priority_queue<int,vector<int>,greater<int>> pq;// min heap
    // here greater<int> is not a fucntion, its a class, 
    // so priority_queue doesnt work with fucntions
    while(true){
        int c; 
        cin>>c;
        if(c == 0){
            int x;
            cin>>x;
            pq.push(x);// O(logN)
        }
        else if(c == 1){
            pq.pop();// O(logN)
        }
        else if(c == 2){
            cout<<pq.top()<<endl;// O(1)
        }
        else{
            break;
        }
    }
    return 0;
}