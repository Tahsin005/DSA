// #include <bits/stdc++.h> 
// /************************************************************

//     Following is the Binary Tree node structure:

//     class BinaryTreeNode
//     {
//     public :
//         T data;
//         BinaryTreeNode<T> *left;
//         BinaryTreeNode<T> *right;

//         BinaryTreeNode(T data) {
//             this -> data = data;
//             left = NULL;
//             right = NULL;
//         }
//     };


// ************************************************************/
// vector<int> in;
// vector<int> pre;
// vector<int> post;
// vector<vector<int>> combined;
// void in_order(BinaryTreeNode<int>* root){
//     if(root == NULL){
//         return;
//     }
        
//     in_order(root->left);
//     in.push_back(root->data);
//     in_order(root->right);
// }

// void pre_order(BinaryTreeNode<int>* root){
//     if(root == NULL){
//         return;
//     }
        
//     pre.push_back(root->data);
//     pre_order(root->left);
//     pre_order(root->right);
// }

// void post_order(BinaryTreeNode<int>* root){
//     if(root == NULL){
//         return;
//     }
        
//     post_order(root->left);
//     post_order(root->right);
//     post.push_back(root->data);
// }

// vector<vector<int>> getTreeTraversal(BinaryTreeNode<int>* root) {

//     in.clear();
//     pre.clear();
//     post.clear();
    
//     in_order(root);
//     pre_order(root);
//     post_order(root);

//     combined.clear();
//     combined.push_back(in);
//     combined.push_back(pre);
//     combined.push_back(post);

//     return combined;
// }