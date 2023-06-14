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
void middle_element(Node* head,int count){
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
    
    middle_element(head,get_size(head));
    return 0;
}