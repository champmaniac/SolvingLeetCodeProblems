class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        // ListNode* temp = head;
        // int n=0;
        // while(temp!=NULL)
        // {
        //     n++;
        //     temp=temp->next;
        // }
        // int half = n/2;
        // temp=head;
        // while(half--)
        // {
        //     temp=temp->next;
        // }
        // return temp;
        
        ListNode *slow =head, *fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow= slow->next;
            fast= fast->next->next;
        }
        return slow;
    }
};