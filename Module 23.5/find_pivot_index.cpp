// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {
//         if(nums.size() == 0){
//             return 0;
//         }
//         int l,r;
//         int flag = -1;
//         for(int i = 0; i < nums.size(); i++){
//             if(i == 0){
//                 l = 0;
//                 r = 0;
//                 for(int j = 1; j < nums.size(); j++){
//                     r += nums[j];
//                 }
//                 if(l == r){
//                     flag = i;
//                     break;
//                 }
//             }
//             if(i == nums.size() - 1){
//                 l = 0;
//                 r = 0;
//                 for(int j = 0; j < nums.size() - 1; j++){
//                     l += nums[j];
//                 }
//                 if(l == r){
//                     flag = i;
//                     break;
//                 }
//             }
//             else{
//                 l = 0;
//                 r = 0;
//                 for(int j = 0; j < i; j++){
//                     l += nums[j];
//                 }
//                 for(int k = i + 1; k < nums.size(); k++){
//                     r += nums[k];
//                 }
//                 if(l == r){
//                     flag = i;
//                     break;
//                 }
//             }
//         }
//         return flag;
//     }
// };