#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};
void insert_tail(Node* &head, Node* &tail,int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_linked_list(Node* head){
    if(head == NULL){
        cout<<"Nothing to Print"<<endl;
        return;
    }
    while(head->next != NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
}
void insert_head(Node* &head,int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void insert_at_position(Node* head,int val,int pos){
    Node* newNode = new Node(val);
    Node* temp = head;
    for(int i = 1; i <= pos - 1; i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    while(true){
        int val;
        cin>>val;
        if(val == -1) break;
        else insert_tail(head,tail,val);
    }
    return 0;
}