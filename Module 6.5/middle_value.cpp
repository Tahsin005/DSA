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
        temp = temp->next;
    }
    temp->next=new_node;
}
void middle_value(Node* &head,int count){
    Node* temp = head;
    if(count%2!=0){
        for(int i=1;i<((count/2)+1);i++){
            temp=temp->next;
        }
        cout<<temp->value;
    }
    else if(count%2==0){
        for(int i=1;i<count/2;i++){
            temp=temp->next;
        }
        cout<<temp->value<<" "<<temp->next->value;
    }
}
int main(){
    Node* head=NULL;
    int value,count=0;
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
    // cout<<count;
    middle_value(head,count);
    return 0;
}