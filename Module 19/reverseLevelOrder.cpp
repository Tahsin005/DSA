// /************************************************************

//     Following is the TreeNode class structure:

//     template <typename T>

//     class TreeNode {
//     public:
//         T val;
//         TreeNode<T> *left;
//         TreeNode<T> *right;
//         TreeNode(T val) {
//             this->val = val;
//             left = NULL;
//             right = NULL;
//         }
//     };

// ************************************************************/
// #include<bits/stdc++.h>
// vector<int> v;
// void LevelOrder(TreeNode<int>* root){
//     if(root == NULL){
//         return;
//     }
//     // Write your code here.
//     queue<TreeNode<int>* > q;
//     q.push(root);
//     while(!q.empty()){
//         TreeNode<int>* f = q.front();
//         q.pop();

//         v.push_back(f->val);

//         if(f->left) q.push(f->left);
//         if(f->right) q.push(f->right);
//     }
// }
// vector<int> reverseLevelOrder(TreeNode<int> *root){
//     v.clear();
//     LevelOrder(root);
//     reverse(v.begin(),v.end());
//     return v;
// }