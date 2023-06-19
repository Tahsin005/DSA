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
void insert(Node* &head,Node* &tail,int value){
    Node* newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;

    tail = newNode;
}
void palindromeOrNot(Node* head,Node* tail){
    Node* i = head;
    Node* j = tail;
    bool flag = true;
    while(i!=j && i->next!=j){
        if(i->value != j->value){
            flag = false;
            break;
        }   
        else{
            i = i->next;
            j = j->prev;
        }
        
    }
    if(i->value != j->value){
        flag = false;
    }

    if(flag==true) cout<<"YES";
    else cout<<"NO";
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    while(true){
        int value;
        cin>>value;
        if(value==(-1)){
            break;
        }
        else{
            insert(head,tail,value);
        }
    }
    palindromeOrNot(head,tail);
    return 0;
}