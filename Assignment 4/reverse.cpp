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
vector<int> v;
void LevelOrder(Node* root){
    if(root == NULL){
        return;
    }
    queue<Node* > q;
    q.push(root);
    while(!q.empty()){
        Node* f = q.front();
        q.pop();

        v.push_back(f->val);

        if(f->right) q.push(f->right);
        if(f->left) q.push(f->left);
    }
}

int main(){
    Node* root = input_tree();
    LevelOrder(root);
    reverse(v.begin(),v.end());
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}