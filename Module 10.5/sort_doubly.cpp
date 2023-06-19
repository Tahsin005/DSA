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
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int queries;
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
    for(Node* i = head; i->next != NULL; i = i->next){
        for(Node* j = i->next; j != NULL; j = j->next){
            if(i->value > j->value){
                swap(i->value,j->value);
            }
        }
    }
    print_doubly(head);
    return 0;
}