class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *curr = head, *p = NULL,*n = NULL;
        while(curr){
            n = curr ->next;
            curr->next = p;
            p = curr;
            curr = n;
        }
        return p;
    }
};