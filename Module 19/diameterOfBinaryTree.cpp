// /************************************************************

//     Following is the TreeNode class structure

//     template <typename T>
//     class TreeNode {
//        public:
//         T data;
//         TreeNode<T> *left;
//         TreeNode<T> *right;

//         TreeNode(T data) {
//             this->data = data;
//             left = NULL;
//             right = NULL;
//         }
//     };

// ************************************************************/
// int maxheight(TreeNode<int> *root, int &diameter){
//     if(root == NULL){
//         return 0;
//     }
//     int l = maxheight(root->left,diameter);
//     int r = maxheight(root->right,diameter);

//     int currentDiameter = l + r;
//     diameter = max(diameter,currentDiameter);

//     return max(l,r) + 1;
// }
// int diameterOfBinaryTree(TreeNode<int> *root) {
//     int diameter = 0;
//     maxheight(root, diameter);
//     return diameter;
// }
