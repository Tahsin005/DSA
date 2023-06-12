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
    Node* new_node = new Node(value);
    if(head==NULL){
        head=new_node;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=new_node;
}
int main(){
    int value,count=0;
    Node* head = NULL;
    while(true){
        cin>>value;
        if(value==(-1)){
            break;
        } 
        else{
            count++;
            insert_at_tail(head,value);
        }
    }
    cout<<count;
    return 0;
}