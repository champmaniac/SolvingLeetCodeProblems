class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow =head, *fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(fast==slow)break;
        }
        if(fast ==NULL || fast->next==NULL) return NULL;
        ListNode* ptr1=head,*ptr2=slow; // we could take fast also here doesn't matter
        while(ptr1!=ptr2)
        {
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        return ptr1; // we could return ptr2 even doesn't matter.
    }
};