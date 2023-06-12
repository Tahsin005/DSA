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
void sorted_or_not(Node* head){
    Node* temp = head;
    bool flag = true;
    while(temp->next != NULL){
        if(temp->value > temp->next->value){
            flag = false;
            break;
        }
        temp=temp->next;
    }
    if(flag == true) cout<<"YES";
    else if(flag == false) cout<<"NO";
}
int main(){
    int value,size=0;
    Node* head = NULL;
    while(true){
        cin>>value;
        if(value==(-1)){
            break;
        } 
        else{
            size++;
            insert_at_tail(head,value);
        }
    }
    sorted_or_not(head);
    // cout<<size;
    return 0;
}