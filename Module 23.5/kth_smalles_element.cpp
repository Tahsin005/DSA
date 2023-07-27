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
//     int kthSmallest(TreeNode* root, int k) {
//         vector<int> result;
//         iO(root,result);
//         sort(result.begin(),result.end());
//         return result[k - 1];
//     }
// };