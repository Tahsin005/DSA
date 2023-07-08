// /****************************************************************
 
//     Following is the class structure of the Node class:

//         class Node
//         {
//         public:
// 	        int data;
// 	        Node *next;
// 	        Node(int data)
// 	        {
// 		        this->data = data;
// 		        this->next = NULL;
// 	        }
//         };

// *****************************************************************/

// class Stack
// {

// public:
    
//     Node* head = NULL;
//     int sz = 0;

//     Stack()
//     {
//         //Write your code here
//     }

//     int getSize()
//     {
//         return sz;
//     }

//     bool isEmpty()
//     {
//         if(sz == 0) return true;
//         else return false;
//     }

//     void push(int data)
//     {
//         sz++;
//         Node* newNode = new Node(data);
//         newNode->next = head;
//         head = newNode;
//     }

//     void pop()
//     {
//         if(isEmpty()){
//             return;
//         }
//         Node* deleteNode = head;
//         head = head->next;
//         delete deleteNode;
//         sz--;
//     }

//     int getTop()
//     {
//         if(isEmpty()){
//             return -1;
//         }
//         return head->data;
//     }
// };