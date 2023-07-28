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
//     void iO(TreeNode* root,vector<int>& result) {
//         if (root == nullptr) {
//             return;
//         }

//         iO(root->left, result);
//         result.push_back(root->val);
//         iO(root->right, result);
//     }
//     vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
//         vector<int> v;
//         iO(root1,v);
//         iO(root2,v);
//         sort(v.begin(),v.end());
//         return v;
//     }
// };