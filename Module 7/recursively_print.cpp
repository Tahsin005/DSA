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
void print_recursion(Node* head){
    if(head==NULL) return;
    cout<<head->value<<" ";
    print_recursion(head->next);
}
void print_reverse(Node* head){
    if(head==NULL) return;
    print_reverse(head->next);
    cout<<head->value<<" ";
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    int value;
    while(true){
        cin>>value;
        if(value==(-1)){
            break;
        }
        else{
            insert_tail(head,tail,value);
        }
    }
    print_recursion(head);
    cout<<endl;
    print_reverse(head);
    return 0;
}