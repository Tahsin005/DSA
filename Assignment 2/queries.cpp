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
        cout<<head->value<<" "<<tail->value<<endl;
        return;
    }
    tail->next = newNode;
    tail = newNode;
    cout<<head->value<<" "<<tail->value<<endl;
}
void insert_at_head(Node *&head,Node *&tail,int value){
    Node* newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        cout<<head->value<<" "<<tail->value<<endl;
        return;
    }
    newNode->next=head;
    head=newNode;
    cout<<head->value<<" "<<tail->value<<endl;
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    int queries;
    cin>>queries;
    while(queries--){
        int pos=0,value;
        cin>>pos>>value;
        if(pos==0){
            insert_at_head(head,tail,value);
        }
        else if(pos==1){
            insert_tail(head,tail,value);
        }
       
    }
    return 0;
}