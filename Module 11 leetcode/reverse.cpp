// class Solution {
// public:
//     void reverse(ListNode* &head,ListNode* curr){
//         if(curr->next == NULL){
//             head = curr;
//             return;
//         }
//         reverse(head,curr->next);
//         curr->next->next = curr;
//         curr->next = NULL;
//     }
//     ListNode* reverseList(ListNode* head) {
//         if(head == NULL) return head;
//         reverse(head,head);
//         return head;
//     }
// };