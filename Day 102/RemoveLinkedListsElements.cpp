class Solution {
public:
    
    ListNode* removeElements(ListNode* head, int val){ // Recursive
        if(head==NULL) return head;
        head->next = removeElements(head->next,val);
        return head->val==val?head->next:head;
    }
    // ListNode* removeElements(ListNode* head, int val) { // Iterative TC O(N) SC O(N
    //     if(head==NULL) return head;
    //     ListNode * dummy = new ListNode(-1);
    //     dummy->next =head;
    //     ListNode * tail = dummy;
    //     while(tail!=NULL && tail->next!=NULL)
    //     {
    //         if(tail->next->val==val)
    //         {
    //             ListNode * temp = tail->next;
    //             tail->next = temp->next;
    //             delete temp;
    //         }
    //         else
    //         {
    //             tail=tail->next;
    //         }
    //     }
    //     return dummy->next;
    // }
};