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
//     bool flag = false;
//     int sum(vector<int> &path,int &ans){
//         for(int i = path.size() - 1; i >= 0; i--){
//             ans = ans + path[i];
//         }
//         return ans;
//     }
//     void traverse(TreeNode* root,vector<int> &path,int &ans,int targetSum){
//         if(root == nullptr){
//             return;
//         }
//         path.push_back(root->val);
//         if(root->left == NULL && root->right == NULL){
//             if(sum(path,ans) == targetSum){
//                 flag = true;
//             }
//             else{
//                 ans = 0;
//             }
//         }
//         traverse(root->left,path,ans,targetSum);
//         traverse(root->right,path,ans,targetSum);

//         path.pop_back();
//     }
//     bool hasPathSum(TreeNode* root, int targetSum) {
//         int ans = 0;
//         vector<int> path;
//         traverse(root,path,ans,targetSum);
//         return flag;
//     }
// };