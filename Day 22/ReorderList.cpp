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
    void reorderList(ListNode* head) {
        if(!head || !head->next){ return ;}
        ListNode* p=head, *pre =NULL;
        while(p->next){
            pre=p;
            p=p->next;
        }
        pre->next=NULL;
        ListNode* next=head->next;
        reorderList(next);
        head->next=p;
        p->next=next;
    }
};