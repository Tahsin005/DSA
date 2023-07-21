// class Solution {
// public:
//     vector<int> leftRightDifference(vector<int>& nums) {
//         vector<int> test1;
//         int pre[1001];
//         pre[0] = 0;
//         pre[1] = nums[0];
//         for(int i = 2; i < nums.size() ; i++){
//             pre[i] = nums[i - 1] + pre[i - 1];
//         }
//         for(int i = 0; i < nums.size(); i++){
//             // cout<<pre[i]<<" ";
//             test1.push_back(pre[i]);
//         }
//         for(int val: test1){
//             cout<<val<<" ";
//         }
//         reverse(nums.begin(),nums.end());
//         vector<int> test2;
//         cout<<endl;
//         int post[1001];
//         post[0] = 0;
//         post[1] = nums[0];
//         for(int i = 2; i < nums.size() ; i++){
//             post[i] = nums[i - 1] + post[i - 1];
//         }
//         for(int i = 0; i < nums.size(); i++){
//             // cout<<post[i]<<" ";
//             test2.push_back(post[i]);
//         }
        
//         reverse(test2.begin(),test2.end());
//         for(int val: test2){
//             cout<<val<<" ";
//         }
//         vector<int> result;
//         for(int i = 0; i < test1.size(); i++){
//             result.push_back(abs(test1[i] - test2[i]));
//         }
//         for(int val: result){
//             cout<<val<<" ";
//         }
//         return result;
//     }
// };