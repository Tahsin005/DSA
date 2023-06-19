#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int value;
        Node* next;
        Node* prev;
        Node(int value){
            this->value=value;
            this->next=NULL;
            this->prev=NULL;
        }
};
void insert(Node* &head,Node* &tail,int value){
    Node* newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;

    tail = newNode;
}
int get_size(Node* head){
    Node* temp = head;
    int size=0;
    while(temp->next != NULL){
        size++;
        temp = temp->next;
    }
    return size;
}
void sameOrNot(Node* head1,Node* head2,int size1,int size2){
    bool flag = true;
    if(size1 != size2){
        cout<<"NO";
    }
    else{
        Node* temp1 = head1;
        Node* temp2 = head2;
        while(temp1 != NULL){
            if(temp1->value != temp2->value){
                flag = false;
                break;
            }
            else{
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
        }
        if(flag == true) cout<<"YES";
        else cout<<"NO";
    }
}
int main(){
    Node* head1 = NULL;
    Node* head2 = NULL;
    Node* tail1 = NULL;
    Node* tail2 = NULL;

    while(true){
        int value1;
        cin>>value1;
        if(value1==(-1)){
            break;
        }
        else{
            insert(head1,tail1,value1);
        }
    }
    while(true){
        int value2;
        cin>>value2;
        if(value2==(-1)){
            break;
        }
        else{
            insert(head2,tail2,value2);
        }
    }
    int size1 = get_size(head1);
    int size2 = get_size(head2);
    sameOrNot(head1,head2,size1,size2);
    return 0;
}