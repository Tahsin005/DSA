#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* left;
        Node* right;
        Node(int val){
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};
Node* input_tree(){
    int val;
    cin>>val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* f = q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node* myLeft;
        Node* myRight;
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        f->left = myLeft;
        f->right = myRight;

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
}
void level_order(Node* root){
    if(root == NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* f = q.front();
        q.pop();

        cout<<f->val<<" ";

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }

}
bool search(Node* root, int x){
    if(root == NULL) return false;
    if(root->val == x) return true;
    if(x < root->val){
        return search(root->left,x);
    }
    else{
        return search(root->right,x);
    }
}
void insert(Node* root,int x){
    if(root == NULL){
        root = new Node(x);
        return;
    }
    if(x < root->val){
        if(root->left == NULL){
            root->left = new Node(x);
        }
        else{
            insert(root->left,x);
        }
    }
    else{
        if(root->right == NULL){
            root->right = new Node(x);
        }
        else{
            insert(root->right,x);
        }
    }
}
// Node* convert(int a[],int n,int l,int r){
//     if(l > r) return NULL;
//     int mid = (l + r) / 2;
//     Node* root = new Node(a[mid]);
//     Node* leftRoot = convert(a,n,l,mid - 1);
//     Node* rightRoot = convert(a,n,mid + 1,l);
//     root->left = leftRoot;
//     root->right = rightRoot;
//     return root;
// }
int main(){
    Node* root = input_tree();
    level_order(root);
    int x;
    cin>>x;
    insert(root,x);
    search(root,x)? cout<<"Found": cout<<"Not Found";
    return 0;
}