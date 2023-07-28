// class Solution {
// public:
//     void inorderTraversal(TreeNode* node, map<int, int>& mp, int& maxCount){
//         if(node == NULL){
//             return;
//         }

//         inorderTraversal(node->left, mp, maxCount);

//         mp[node->val]++;
//         maxCount = max(maxCount, mp[node->val]);

//         inorderTraversal(node->right, mp, maxCount);
//     }
//     vector<int> findMode(TreeNode* root) {
//         vector<int> v;
//         if(root == NULL)
//             return v;

//         map<int,int> mp;
//         int maxCount = 0;
//         inorderTraversal(root, mp, maxCount);

//         for(auto ans : mp){
//             if(ans.second == maxCount){
//                 v.push_back(ans.first);
//             }
//         }

//         return v;
//     }
// };