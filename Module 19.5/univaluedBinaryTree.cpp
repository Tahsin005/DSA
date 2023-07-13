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
//     vector<int> v;
//     void check(TreeNode* root){
//         if(root == NULL){
//             return;
//         }
//         queue<TreeNode*> q;
//         q.push(root);
//         while(!q.empty()){
//             TreeNode* f = q.front();
//             q.pop();

//             v.push_back(f->val);

//             if(f->left) q.push(f->left);
//             if(f->right) q.push(f->right);
//         }

//     }
//     bool isUnivalTree(TreeNode* root) {
//         check(root);
//         int x = root->val;
//         bool flag = true;
//         for(int i = 0; i < v.size(); i++){
//             if(x != v[i]){
//                 flag = false;
//                 break;
//             }
//         }
//         return flag;
//     }
// };