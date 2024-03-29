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
//     void preorder(TreeNode* root,vector<int> &v){
//         if(root == NULL){
//             return;
//         }
//         if(root->left == NULL || root->right == NULL){
//             v.push_back(0);
//         }
//         v.push_back(root->val);
//         preorder(root->left,v);
//         preorder(root->right,v);
//     }
//     void inorder(TreeNode* root,vector<int> &v){
//         if(root == NULL){
//             return;
//         }
//         if(root->left == NULL || root->right == NULL){
//             v.push_back(0);
//         }
//         inorder(root->left,v);
//         v.push_back(root->val);
//         inorder(root->right,v);
//     }
//     bool isSameTree(TreeNode* p, TreeNode* q) {
//         vector<int> pre1;
//         vector<int> pre2;
//         vector<int> in1;
//         vector<int> in2;

//         preorder(p,pre1);
//         preorder(q,pre2);
//         inorder(p,in1);
//         inorder(q,in2);

//         return ((pre1 == pre2) && (in1 == in2));
//     }
// };