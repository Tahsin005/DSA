// class Solution {
// public:
//     int size(ListNode* head){
//         int count = 0;
//         ListNode* temp = head;
//         while(temp != NULL){
//             count++;
//             temp = temp->next;
//         }
//         return count;
//     }
//     ListNode* swapNodes(ListNode* head, int k) {
//         ListNode* temp1 = head;
//         ListNode* temp2 = head;
//         for(int i=1;i<k;i++){
//             temp1 = temp1->next;
//         }
//         int sz = size(head);
//         for(int i=1;i<=sz-k;i++){
//             temp2 = temp2->next;
//         }
//         swap(temp1->val,temp2->val);
//         return head;
//     }
// };