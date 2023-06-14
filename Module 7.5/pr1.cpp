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
int get_size(Node* head){
    Node* temp = head;
    int count=0;
    while(temp != NULL){
        count++;
        temp=temp->next;
    }
    return count;
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
    int size1=get_size(head);
    int size2=get_size(head1);
    if(size1==size2) cout<<"YES";
    else cout<<"NO";
    return 0;
}