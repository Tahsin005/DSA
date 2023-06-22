#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        string address;
        Node* next;
        Node* prev;
        Node(string address){
            this->address = address;
            this->next = NULL;
            this->prev = NULL;
        }
};

void insert_at_tail(Node* &head,Node* &tail,string address){
    Node* newNode = new Node(address);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

void next_address(Node* &temp){
    if(temp != NULL && temp->next != NULL){
        temp = temp->next;
        cout<<temp->address<<endl;
    }
    else{
        cout<<"Not Available"<<endl;
    }
}

void previous_address(Node* &temp){
    if(temp != NULL && temp->prev != NULL){
        temp = temp->prev;
        cout<<temp->address<<endl;
    }
    else{
        cout<<"Not Available"<<endl;
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    string s;

    while(true){
        cin>>s;
        if(s == "end") break;
        insert_at_tail(head,tail,s);
    }
    int queries;
    cin>>queries;

    Node* temp = NULL;

    while(queries--){
        string q1;
        cin>>q1;

        if(q1 == "visit"){
            string q2;
            cin>>q2;
            Node* current = head;
            bool flag = false;

            while(current != NULL){
                if(current->address == q2){
                    flag = true;
                    temp = current;
                    break;
                }
                else{
                    current = current->next;
                }
            }
            if(flag == true){
                cout<<q2<<endl;
            }
            else{
                cout<<"Not Available"<<endl;
            }
        }
        else if(q1 == "next"){
            next_address(temp);
        }
        else if(q1 == "prev"){
            previous_address(temp);
        }
    }
    return 0;
}
