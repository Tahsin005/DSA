#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data=data;
            this->next=NULL;
        }
};

class Stack{
    Node* head;
    int capacity;
    int currsize;
    public:
        Stack(int capacity){
            this->capacity=capacity;
            this->currsize=0;
            head = NULL;
        }

        bool isEmpty(){
            return this->head == NULL;
        }

        bool isFull(){
            return this->currsize == this->capacity;
        }

        void push(int data){
            if(this->currsize==this->capacity){
                cout<<"Overflow"<<endl;
                return;
            }
            Node* newNode = new Node(data);
            newNode->next=this->head;
            this->head=newNode;
            this->currsize++;
        }
        int pop(){
            if(this->head == NULL){
                cout<<"Underflow"<<endl;
                return INT_MIN;
            }
            Node* new_head;
            new_head = this->head->next;
            this->head->next = NULL;
            Node* deleteNode = this->head;
            int result = deleteNode->data;
            delete deleteNode;
            this->head = new_head;
            return result;
        }
        int getTop(){
            if(this->head == NULL){
                cout<<"Underflow"<<endl;
                return INT_MIN;
            }
            return this->head->data;
        }
        int size(){
            return this->currsize;
        }
};
int main(){
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.getTop()<<endl;
    st.push(4);
    st.push(5);
    cout<<st.getTop()<<endl;
    st.push(6);
    
    st.pop();
    st.pop();
    cout<<st.getTop()<<endl;
    return 0;
}