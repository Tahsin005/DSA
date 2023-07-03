#include<bits/stdc++.h>
using namespace std;
class myQueue{
    public:
        list<int> l;
        void push(int value){
            l.push_back(value);
        }
        void pop(){
            l.pop_front();
        }
        int front(){
            return l.front();
        }
        int size(){
            return l.size();
        }
        bool empty(){
            return l.empty();
        }
};
int main(){
    myQueue q;
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        q.push(x);
    }
    while(q.empty() != true){
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}