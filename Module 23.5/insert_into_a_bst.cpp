// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     void insert(TreeNode* &root,int x){
//         if(root == NULL){
//             root = new TreeNode(x);
//             return;
//         }
//         if(x < root->val){
//             if(root->left == NULL){
//                 root->left = new TreeNode(x);
//             }
//             else{
//                 insert(root->left,x);
//             }
//         }
//         else{
//             if(root->right == NULL){
//                 root->right = new TreeNode(x);
//             }
//             else{
//                 insert(root->right,x);
//             }
//         }
//     }
//     TreeNode* insertIntoBST(TreeNode* root, int val) {
//         insert(root,val);
//         return root;
//     }
// };