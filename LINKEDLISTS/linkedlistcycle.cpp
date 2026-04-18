// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//     vector<ListNode*> arr;
//     while(head != NULL) {
//         for(int i = 0; i < arr.size(); i++) {
//             if(arr[i] == head){
//                 return true;
//             }
//         }
//         arr.push_back(head);
//         head = head->next;
//     }
//     return false;
// }
// };