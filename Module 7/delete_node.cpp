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
    Node* newNode = new Node(value);

    if(head == NULL){
        head=newNode;
        cout<<endl<<"Inserted at Head"<<endl;
        cout<<endl;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    //temp ekhn last node e
    temp->next=newNode;
    cout<<endl<<"Inserted at tail"<<endl;
    cout<<endl;
}
void print_linked_list(Node *head){
    cout<<endl;
    cout<<endl;
    Node* temp = head;
    cout<<"Your linked list is : ";
    while(temp != NULL){
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    cout<<endl;
    cout<<endl;
}
void insert_at_position(Node* head,int pos,int v){
    Node* newNode = new Node(v);
    Node* temp = head;
    for(int i=1;i<=pos-1;i++){
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    cout<<"Inserted at position "<<pos<<endl<<endl<<endl;
}
void insert_at_head(Node *&head,int v){
    Node* newNode = new Node(v);
    newNode->next=head;
    head=newNode;
    cout<<endl<<"Inserted at head"<<endl<<endl;
}
int size(Node *head){
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL){
        count++;
        tmp = tmp->next;
    }
    return count;
}
void delete_from_position(Node* head,int pos){
    Node* temp=head;
    for(int i=1;i<=pos-1;i++){
        temp=temp->next;
    }
    Node* delete_node=temp->next;
    temp->next=temp->next->next;
    delete delete_node;
    
    cout<<endl<<endl<<"Deleted from position "<<pos<<endl<<endl;
}
void delete_from_head(Node* &head){
    Node* delete_node=head;
    head=head->next;

    delete delete_node;

    cout<<endl<<endl<<"Deleted from head "<<endl<<endl;

}
int main(){
    Node* head=NULL;
    while(true){
        cout<<"Option 1 : Insert a Tail"<<endl;
        cout<<"Option 2 : Print linked list"<<endl;
        cout<<"Option 3 : Insert at any position"<<endl;
        cout<<"Option 4 : Insert at head"<<endl;
        cout<<"Option 5 : Delete from position"<<endl;
        cout<<"Option 6 : Delete from head"<<endl;
        cout<<"Option 7 : Terminate"<<endl;
        int op;
        cin>>op;
        if(op==1){
            cout<<"Please enter your value : ";
            int v;
            cin>>v;
            insert_at_tail(head,v);
        }
        else if(op==2){
            print_linked_list(head);
        }
        else if(op==3){
            int pos,value;
            cout<<"Enter Position : ";
            cin>>pos;
            cout<<"Enter value : ";
            cin>>value;
            if(pos==0){
                insert_at_head(head,value);
            }
            else{
                insert_at_position(head,pos,value);
            }
        }
        else if(op==4){
            int value;
            cout<<"Enter value : ";
            cin>>value;
            insert_at_head(head,value);
        }
        else if(op==5){
            int pos;
            cout<<"Enter position : ";
            cin>>pos;
            if(pos>=size(head)){
                cout<<"Invalid Index";
            }
            else{
                delete_from_position(head,pos);
            }
        }
        else if(op==6){
            delete_from_head(head);
        }
        else if(op==7){
            break;
        }
    }
    return 0;
}