class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
            return NULL;
        return reverse(head); 
    }
    
    ListNode* reverse(ListNode* head){
        if(head->next==NULL)
            return head;
        ListNode* reverseHead = reverse(head->next);
        head->next->next=head;
        head->next=NULL;
        return reverseHead;
        
    }
};