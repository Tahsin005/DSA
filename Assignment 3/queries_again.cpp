#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int v;
        Node* next;
        Node* prev;
        Node(int v){
            this->v=v;
            this->next=NULL;
            this->prev=NULL;
        }
};
void print_normal(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->v<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void print_reverse(Node* tail){
    Node* temp = tail;
    while(temp != NULL){
        cout<<temp->v<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}
void insert_at_position(Node* head,int x,int v){
    Node* newNode = new Node(v);
    Node* temp = head;
    for(int i=1;i<=x-1;i++){
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
void insert_head(Node* &head,Node* &tail,int v){
    Node* newNode = new Node(v);
    if(head == NULL){
        head = newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}
void insert_tail(Node* &head,Node* &tail,int v){
    Node* newNode = new Node(v);
    if(tail == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=tail->next;
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    int queries;
    cin>>queries;
    while(queries--){
        int x,v;
        cin>>x>>v;
        if(x == 0){
            insert_head(head,tail,v);
            cout<<"L -> ";
            print_normal(head);
            cout<<"R -> ";
            print_reverse(tail);
        }
        else if(x > get_size(head)){
            cout<<"Invalid"<<endl;
        }
        else if(x==get_size(head)){
            insert_tail(head,tail,v);
            cout<<"L -> ";
            print_normal(head);
            cout<<"R -> ";
            print_reverse(tail);
        }
        else{
            insert_at_position(head,x,v);
            cout<<"L -> ";
            print_normal(head);
            cout<<"R -> ";
            print_reverse(tail);
        }
    }
    return 0;
}