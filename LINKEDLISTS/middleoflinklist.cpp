// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode* prev = head;
//         ListNode* last = head;
//         while(last!=NULL && last->next!=NULL){
//             prev = prev->next;
//             last = last->next->next;
//         }
//         ListNode* temp = new ListNode();
//         temp=prev;
//         return temp;
//     }
// };