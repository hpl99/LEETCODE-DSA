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
//     ListNode* sortList(ListNode* head) {
//         ListNode* x = head;
//         vector<int> arr;
//         int i=0;
//         while(x!=NULL && x->next!=NULL && x!=NULL){
//             arr[i].push_back(x->val);
//             x = x->next;
//             i++;
//         }
//         sort(arr.begin(),arr.end());
//         ListNode* temp = head;
//         while(i>0){
//             temp->val = arr[i];
//             temp = temp->next;
//             i--;
//         }
//         return temp;
//     }
// };