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
void insert_tail(Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);
    if (head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void sll_concat(Node* &tail,Node* &head1){
    tail->next=head1;
}
void print_linked_list(Node *head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->value<<" ";
        temp=temp->next;
    }
}
int main(){
    Node* head=NULL;
    Node* head1=NULL;
    Node* tail=NULL;
    Node* tail1=NULL;
    int value,value1;
    while(true){
        cin>>value;
        if(value==(-1)){
            break;
        }
        else{
            insert_tail(head,tail,value);
        }
    }
    while(true){
        cin>>value1;
        if(value1==(-1)){
            break;
        }
        else{
            insert_tail(head1,tail1,value1);
        }
    }
    print_linked_list(head);
    cout<<endl;
    print_linked_list(head1);
    cout<<endl;
    sll_concat(tail,head1);
    cout<<endl;
    cout<<endl;
    print_linked_list(head);
    cout<<endl;
    print_linked_list(head1);
    return 0;
}