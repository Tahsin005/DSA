// #include <bits/stdc++.h> 
// /************************************************************

//     Following is the TreeNode class structure

//     template <typename T>
//     class TreeNode {
//        public:
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
// TreeNode<int>* convert(vector<int> arr,int n,int l,int r){
//     if(l > r) return NULL;
//     int mid = (l + r) / 2;
//     TreeNode<int>* root = new TreeNode<int>(arr[mid]);
//     TreeNode<int>* leftRoot = convert(arr,n,l,mid - 1);
//     TreeNode<int>* rightRoot= convert(arr,n,mid + 1,r);
//     root->left = leftRoot;
//     root->right = rightRoot;
//     return root;
// }
// TreeNode<int>* sortedArrToBST(vector<int> &arr, int n)
// {
//     // Write your code here.
//     TreeNode<int>* ans = convert(arr,n,0,n-1);
//     return ans;
// }