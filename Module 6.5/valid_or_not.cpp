#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int value;
        Node* next;
        Node(int value){
            this->value=value;
            this->next=NULL;
        }
};
void insert_at_tail(Node* &head,int value){
    Node* new_node = new Node(value);
    if(head==NULL){
        head=new_node;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=new_node;
}
void print_linked_list(Node *head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    cout<<endl;
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
void insert_at_any_positon(Node* &head,int pos,int val){
    Node* temp = head;
    Node* newNode = new Node(val);
    int size=get_size(head);
    if(pos > size){
        cout<<"Invalid"<<endl;
        return;
    }
    else if(pos==0){
        newNode->next=head;
        head=newNode;
        print_linked_list(head);
    }
    else if(pos==1){
        newNode->next=temp->next;
        temp->next=newNode;
        print_linked_list(head);
    }
    else if(pos==size){
        insert_at_tail(head,val);
        print_linked_list(head);
    }
    else{
        for(int i=1;i<=pos-1;i++){
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
        print_linked_list(head);
    }
}
int main(){
    int value;
    Node* head = NULL;
    while(true){
        cin>>value;
        if(value==(-1)){
            break;
        } 
        else{
            insert_at_tail(head,value);
        }
    }
    int queries;
    cin>>queries;
    while(queries--){
        int pos,val;
        cin>>pos>>val;
        insert_at_any_positon(head,pos,val);
    }
    return 0;
}