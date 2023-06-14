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
    for(Node* i = head; i->next !=NULL; i = i->next){
        for(Node* j= i->next;j !=NULL; j = j->next){
            if(i->value<j->value){
                swap(i->value,j->value);
            }
        }
    }
    cout<<head->value;
    return 0;
}