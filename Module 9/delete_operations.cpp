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
int size(Node* head){
    Node* temp = head;
    int count=0;
    while(temp != NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
void delete_at_position(Node* &head,int pos){
    Node* temp = head;
    for(int i=1;i<=pos-1;i++){
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next=temp->next->next;
    temp->next->prev=temp;
    delete deleteNode;
}
void delete_tail(Node* &head,Node* &tail){
    Node* deletenode = tail;
    tail= tail->prev;
    delete deletenode;
    if(tail == NULL){
        head = NULL;
        return;
    }
    tail->next=NULL;
}
void delete_head(Node* &head,Node* &tail){
    Node* deleteNode = head;
    head =  head->next;
    delete deleteNode;
    if(head == NULL){
        tail = NULL;
        return;
    }
    head->prev=NULL;
}
int main(){
    // Node* head = NULL;
    // Node* tail = NULL;
    Node* head = new Node(10);
    Node* tail = head;
    // Node* a = new Node(20);
    // Node* b = new Node(30);
    // Node* c = new Node(40);
    // Node* tail = c;


    // head->next=a;
    // a->prev=head;
    // a->next=b;
    // b->prev=a;
    // b->next=c;
    // c->prev=b;

    int pos;
    cin>>pos;
    if(pos>= size(head)){
        cout<<"Invalid"<<endl;
    }
    else if(pos == 0){
        delete_head(head,tail);
    }
    else if(pos == size(head) -1 ){
        delete_tail(head,tail);
    }
    else{
        delete_at_position(head,pos);
    }
    // delete_at_position(head,pos);

    // delete_tail(tail);
    // delete_head(head);
    print_normal(head);
    print_reverse(tail);
    return 0;
}