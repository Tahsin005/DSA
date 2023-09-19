#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node* prev;
        Node(int val){
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};
void insert_tail(Node* &head, Node* tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void print_normal(Node* head){
    if(head == NULL) return;
    while(head != NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
}
void print_reverse(Node* tail){
    while(tail != NULL){
        cout<<tail->val<<" ";
        tail = tail->next;
    }
}
int sz(Node* head){
    int cnt = 0;
    while(head != NULL){
        cnt++;
        head = head->next;
    }
    return cnt;
}

void insert_at_a_position(Node* head,int pos,int val){
    Node* newNode = new Node(val);
    Node* temp = head;
    for(int i = 1; i <= pos - 1; i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next = newNode;
    temp->next->prev = newNode;
}
void insert_head(Node* &head,Node* &tail,int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
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