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
//     ListNode* rotateRight(ListNode* head, int k) {
        
//         if(head == NULL || head->next == NULL || k == 0)
//             return head;

//         ListNode* count = head;
//         int sum = 0;
        
//         while(count != NULL){
//             sum++;
//             count = count->next;
//         }
//         int x =k % sum;
//         if(x == 0){
//              return head;
//         }
//         ListNode* start = head;
//         ListNode* proxy = head;
//         int fin = 1;
//         while(fin<sum-x){
//             proxy = proxy->next;
//             fin++;
//         }
//         start = proxy->next;
//         proxy->next = NULL;
//         ListNode* temp = start;
//         while(temp->next != NULL){
//             temp = temp->next;
//         }
//         temp->next = head;
//         return start;
//     }
// };