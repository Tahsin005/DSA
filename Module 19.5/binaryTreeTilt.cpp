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
//     int tilt(TreeNode*root, int &result){
//         if(root == NULL){
//             return 0;
//         }
//         int l = tilt(root->left,result);
//         int r = tilt(root->right,result);

//         result = result + abs(l - r);

//         return l + r + root->val;
//     }
//     int findTilt(TreeNode* root) {
//         int result = 0;
//         tilt(root, result);
//         return result;
//     }
// };