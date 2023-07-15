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
    if(root) q.push(root);
    while(!q.empty()){
        // 1. ber kore ano
        Node* p = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache ekhane koro
        int l,r;
        cin>>l>>r;
        Node* myLeft;
        Node* myRight;
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r == -1) myRight = NULL;
        else myRight = new Node(r);
        // Connection
        p->left = myLeft;
        p->right = myRight;

        // 3. tar children k line e rakho
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}
void level_order(Node* root){
    if(root == NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        // 1. ber kore ano
        Node* f = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache ekhane koro
        cout<<f->val<<" ";

        // 3. tar children k line e rakho
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
int main(){
    Node* root = input_tree();
    // level_order(root);
    int x;
    cin>>x;
    (search(root,x))? cout<<"Found": cout<<"Not found";
    /*
    Time complexity - O(height)
    if it is a good binary tree(Perfect Binary Tree) , then - O(logN)
    if it is a bad binary tree , then - O(N)
    */
    return 0;
}