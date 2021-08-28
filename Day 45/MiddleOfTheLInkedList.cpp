/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) { // if we move slow by 1 steps and fast by 2 steps
        ListNode *slow=head,*fast=head;    // when fast will reach the end slow will be at middle
        while(fast && fast->next){
            slow=slow->next, fast=fast->next->next;
        }
        return slow;
    }
};