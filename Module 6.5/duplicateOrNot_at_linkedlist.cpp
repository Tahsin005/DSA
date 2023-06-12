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
void duplicate_or_not(Node* head){
    bool flag = false;
    Node* temp = head;
    vector<int> v(100,0);
    while(temp != NULL){
        int val=temp->value;
        v[val]++;
        temp=temp->next;
    }
    for(int i=0;i<100;i++){
        if(v[i]>1){
            flag = true;
            break;
        }
    }
    if(flag == false) cout<<"NO";
    else cout<<"YES";
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
    duplicate_or_not(head);
    return 0;
}