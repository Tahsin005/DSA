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
void insert_tail(Node *&head,Node *&tail,int value){
    Node *newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
} 
void print_linked_list(Node *head){
    Node* temphead = head;
    while(temphead != NULL){
        cout<<temphead->value<<" ";
        temphead=temphead->next;
    }
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
    for(Node* i=head; i->next != NULL; i = i->next){
        for(Node* j=i->next;j != NULL; j = j->next){
            if(i->value > j->value){
                swap(i->value , j->value);
            }
        }
    }
    Node* temp = head;
    while(temp->next != NULL){
        if(temp->value == temp->next->value){
            temp->next = temp->next->next;
        }
        if(temp->next == NULL){
            break;
        }
        else if(temp->value != temp->next->value){
            temp = temp->next;
        }
    }
    print_linked_list(head);
    return 0;
}