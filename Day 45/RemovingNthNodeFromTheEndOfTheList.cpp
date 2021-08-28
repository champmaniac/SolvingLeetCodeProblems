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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow=head,*fast=head;
        while(n--) // moving fast pointer n steps forward
            fast=fast->next;
        if(!fast)
            return head->next;
        while(fast->next){ // moving slow and fast pointers one step forward
            slow=slow->next;    // now here the slow pointer will point to the prev node 
            fast=fast->next;    // of the deleted node
        }
        slow->next=slow->next->next;
        return head;
    }
};