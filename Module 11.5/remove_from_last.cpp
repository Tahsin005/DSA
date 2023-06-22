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
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         if(head == NULL) return head;
//         int sz = size(head);
//         if(sz == n){
//             head=head->next;
//             return head;
//         }
//         if(n == 0) return head;
//         ListNode* temp = head;
//         for(int i=1;i<sz-n;i++){
//             temp = temp->next;
//         }
//         ListNode* deleteNode = temp->next;
//         temp->next = temp->next->next;
//         delete deleteNode;
//         return head;
//     }
// };