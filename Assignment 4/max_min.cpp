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
int mx = INT_MIN;
int mn = INT_MAX;
int maximum(Node* root){
    if(root == NULL){
        return 0;
    }
    queue<Node*> q;
    q.push(root);


    while(!q.empty()){
        int size = q.size();

            Node* f = q.front();
            q.pop();

            if(f->left == NULL && f->right == NULL){
                if(mx < f->val){
                    mx = f->val;
                }
            }
            
            if(f->left) q.push(f->left);
            if(f->right) q.push(f->right);
    }
    return mx;
}
int minimum(Node* root){
    if(root == NULL){
        return 0;
    }
    queue<Node*> q;
    q.push(root);


    while(!q.empty()){
        int size = q.size();

            Node* f = q.front();
            q.pop();

            if(f->left == NULL && f->right == NULL){
                if(mn > f->val){
                    mn = f->val;
                }
            }
            
            if(f->left) q.push(f->left);
            if(f->right) q.push(f->right);
    }
    return mn;
}

int main(){
    Node* root = input_tree();
    int result1 = maximum(root);
    int result2 = minimum(root);
    cout<<result1<<" "<<result2;
    return 0;
}