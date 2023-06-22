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
void reverse(Node* &head,Node* curr){
    if(curr->next == NULL){
        head = curr;
        return;
    }
    reverse(head,curr->next);
    curr->next->next = curr;
    curr->next = NULL;
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
    Node* newHead = NULL;
    Node* newTail = NULL;
    Node* temp = head;
    while(temp != NULL){
        insert_tail(newHead,newTail,temp->value);
        temp = temp->next;
    }
    reverse(newHead,newHead);
    temp = head;
    Node* temp2 = newHead;
    bool flag = true;
    while(temp != NULL){
        if(temp->value != temp2->value){
            flag = false;
            break;
        }
        temp = temp->next;
        temp2 = temp2->next;
    }
    if(flag == true) cout<<"YES";
    else cout<<"NO";
    return 0;
}