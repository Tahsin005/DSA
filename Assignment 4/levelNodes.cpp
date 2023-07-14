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

        Node* f = q.front();
        q.pop();


        int l,r;
        cin>>l>>r;
        Node* myleft;
        Node* myright;
        if(l == -1) myleft = NULL;
        else myleft = new Node(l);
        if(r == -1) myright = NULL;
        else myright = new Node(r);

        f->left = myleft;
        f->right = myright;


        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    return root;
}
int max_height(Node* root){
    if(root == NULL){
        return 0;
    }
    int l = max_height(root->left);
    int r = max_height(root->right);
    return max(l,r) + 1;
}
void printLevel(Node* root, int currentLevel, int level){
   
    if(root == NULL){
        return;   
    }  
    if(currentLevel == level){
        cout<<root->val<<" ";
        return;
    }

    printLevel(root->left, currentLevel+1, level);
    printLevel(root->right, currentLevel+1, level);
}
int main(){
    Node* root = input_tree();
    int x;
    cin>>x;
    if(x >= max_height(root)){
        cout<<"Invalid";
    }
    else{
        printLevel(root, 0, x);
    }

    return 0;
}