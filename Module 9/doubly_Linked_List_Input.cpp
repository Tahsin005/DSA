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
void print_normal(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void print_reverse(Node* tail){
    Node* temp = tail;
    while(temp != NULL){
        cout<<temp->value<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}
void insert_tail(Node* &head,Node* &tail,int value){
    Node* newNode = new Node(value);
    if(tail == NULL){
        head = newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;

    // tail=tail->next;
    tail=newNode;
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int value;
    while(true){
        cin>>value;
        if(value==(-1)) break;
        insert_tail(head,tail,value);
    }
    print_normal(head);
    print_reverse(tail);
    return 0;
}