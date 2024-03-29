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
//     void inorder(TreeNode* root){
//         if(root == NULL){
//             return;
//         }
//         inorder(root->left);

//         v.push_back(root->val);

//         inorder(root->right);
//     }
//     int minAbs(vector<int> nums){
//         int mn = INT_MAX;
//         for(int i = 0; i < nums.size() - 1; i++){
//             for(int j = i + 1; j < nums.size(); j++){
//                 int cal = abs(nums[i] - nums[j]);
//                 if(cal < mn){
//                     mn = cal;
//                 }
//             }
//         }
//         return mn;
//     }
//     int getMinimumDifference(TreeNode* root) {
//         inorder(root);
//         int ans = minAbs(v);
//         return ans;
//     }
// };