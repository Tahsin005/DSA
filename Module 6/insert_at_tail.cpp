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

    Node* temp = head;
    if(head == NULL){
        head=newNode;
        return;
    }

    while(temp->next != NULL){
        temp = temp->next;
    }
    //temp ekhn last node e
    temp->next=newNode;
}
void print_linked_list(Node *head){
    Node* temp = head;
    cout<<"Your linked list is : ";
    while(temp != NULL){
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* head=NULL;
    while(true){
        cout<<"Option 1 : Insert a Tail"<<endl;
        cout<<"Option 2 : Print linked list"<<endl;
        cout<<"Option 1 : Terminate"<<endl;
        int op;
        cin>>op;
        if(op==1){
            cout<<"Please enter your value : ";
            int v;
            cin>>v;
            insert_at_tail(head,v);
        }
        else if(op==2){
            print_linked_list(head);
        }
        else if(op==3){
            break;
        }
    }
    return 0;
}