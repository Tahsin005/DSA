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
void same(Node* head,Node* head1,int size1,int size2){
    int flag=1;
    if(size1!=size2){
        cout<<"NO";
    }
    else{
        Node* temp1 = head;
        Node* temp2 =head1;
        while(temp1!=NULL){
            if(temp1->value != temp2->value){
                flag=0;
                break;
            }
            else{
                temp1=temp1->next;
                temp2=temp2->next;
            }
        }
        if(flag==0) cout<<"NO";
        else cout<<"YES";
    }

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
    same(head,head1,size1,size2);
    return 0;
}