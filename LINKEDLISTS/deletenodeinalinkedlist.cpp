/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     void deleteNode(ListNode* node) {
//        ListNode* curr = node;
//        int count = 0;
//        while(curr->next!=NULL)
//        {
//         count++;
//         curr = curr->next;
//        }
//        curr = node;
//        int sum = 0;
//         while( curr!=NULL && curr->next!=NULL)
//         {
//         sum++;
//         curr->val=curr->next->val;
//         if(sum==count){
//           curr->next = NULL;
//         } 
//         curr = curr->next;
//       }
//     }
// };