#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int value;
        Node* next;
        Node* prev;
        Node(int value){
            this->value=value;
            this->next=NULL;
            this->prev=NULL;
        }
};
class myStack{
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int sz = 0;
        void push(int value){
            sz++;
            Node* newNode = new Node(value);
            if(head == NULL){
                head = newNode;
                tail = newNode;
                return;
            }
            tail->next = newNode;
            newNode->prev = tail;
            tail = tail->next;
        }
        void pop(){
            sz--;
            Node* deleteNode = tail;
            tail = tail->prev;
            if(tail == NULL){
                head = NULL;
            }
            else{
                tail->next = NULL;
            }
            delete deleteNode;
        }
        int top(){
            return tail->value;
        }
        int size(){
            return sz;
        }
        bool empty(){
            if(sz == 0) return true;
            else return false;
        }
};
int main(){
    myStack st1,st2;
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        st1.push(x);
    }
    int m;
    cin>>m;
    while(m--){
        int y;
        cin>>y;
        st2.push(y);
    }
    bool flag = true;
    if(st1.size() != st2.size()){
        cout<<"NO";
    }
    else{
        while(st1.empty() != true){
            if(st1.top() == st2.top()){
                st1.pop();
                st2.pop();
            }
            else{
                flag = false;
                break;
            }
        }
        (flag == true)? cout<<"YES":cout<<"NO";
    }
    return 0;
}