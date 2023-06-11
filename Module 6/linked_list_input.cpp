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
    Node* newNode = new Node(value);

    if(head == NULL){
        head=newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    //temp ekhn last node e
    temp->next=newNode;
}
void print_linked_list(Node *head){
    cout<<endl;
    Node* temp = head;
    cout<<"Your linked list is : ";
    while(temp != NULL){
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    cout<<endl;
    cout<<endl;
}
int main(){
    int value;
    Node* head=NULL;
    while(true){
        cin>>value;
        if(value==(-1)) break;
        insert_at_tail(head,value);
    }
    print_linked_list(head);
    return 0;
}