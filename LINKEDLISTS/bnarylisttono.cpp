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
//     int getDecimalValue(ListNode* head) {
//        ListNode* temp = head;
//        int count = 0;
//        vector<int> arr(32);
//        int i = 0;
//        while(temp != NULL){
//             arr[i] = temp->val;
//             temp = temp->next;
//             i++;
//             count++;
//        } 
//        int sum = 0;
//        for(i=0;i<count;i++){
//             if(arr[i]==1){
//                 sum += pow(2,count-i-1);
//             }
//        }
//        return sum;
//     }
// };