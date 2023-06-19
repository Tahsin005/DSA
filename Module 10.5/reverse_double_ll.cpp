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
void print_doubly(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void reverse(Node* head,Node* tail){
    Node* i = head;
    Node* j = tail;
    while(i!=j && i->next!=j){
        swap(i->value,j->value);
        i = i->next;
        j = j->prev;
    }
    swap(i->value,j->value);
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
    reverse(head,tail);
    print_doubly(head);
    return 0;
}