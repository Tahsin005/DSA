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
        Node* f = q.front();
        q.pop();

        cout<<f->val<<" ";

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
}
int count_node(Node* root){
    if(root == NULL){
        return 0;
    }
    int l = count_node(root->left);
    int r = count_node(root->right);
    return l + r + 1;
}
int leaf_node(Node* root){
    if(root == NULL){
        return 0;
    }
    else if(root->left == NULL and root->right == NULL){
        return 1;
    }
    else{
        int l = leaf_node(root->left);
        int r = leaf_node(root->right);
        return l + r;
    }
}
int max_height(Node* root){
    if(root == NULL){
        return 0;
    }
    int l = max_height(root->left);
    int r = max_height(root->right);
    return max(l,r) + 1;
}
int main(){
    Node* root = input_tree();
    level_order(root);
    cout<<endl;
    cout<<"Number of nodes in the binary tree : "<<count_node(root)<<endl;
    cout<<"Number of leaf node in the binary tree : "<<leaf_node(root)<<endl;
    cout<<"Maximum height of the binary tree : "<<max_height(root)<<endl;
    return 0;
}