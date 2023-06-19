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
void insert_at_position(Node* head,int pos,int value){
    Node* newNode = new Node(value);
    Node* temp = head;
    for(int i=1;i<pos-1;i++){
        temp = temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    newNode->next->prev=newNode;
    newNode->prev=temp;

}
int get_size(Node* head){
    Node* temp = head;
    int count=0;
    while(temp != NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
void insert_head(Node* &head,Node* &tail,int value){
    Node* newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
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

    tail=tail->next;
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int queries;
    cin>>queries;
    while(queries--){
        int pos,value;
        cin>>pos>>value;
        if(pos==0){
            insert_head(head,tail,value);
            print_normal(head);
            print_reverse(tail);
        }
        else if(pos == get_size(head)){
            insert_tail(head,tail,value);
            print_normal(head);
            print_reverse(tail);
        }
        else if(pos>get_size(head)){
            cout<<"Invalid"<<endl;
        }
        else{
            insert_at_position(head,pos,value);
            print_normal(head);
            print_reverse(tail);
        }
        
    }
    return 0;
}