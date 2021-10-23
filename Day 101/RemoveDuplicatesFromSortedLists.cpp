class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode *newHead = deleteDuplicates(head->next);
        if(head->val==newHead->val)
            return newHead;
        else
        {
            head->next=newHead;
            return head;
        }
    }
};