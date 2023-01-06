class Solution {
public:
    int size(ListNode* head){
        auto curr = head;
        int count = 0;
        while(curr){
            count++;
            curr=curr->next;
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        int n = size(head);
        int steps = n/2;
        auto curr = head;
        while(steps--){
            curr=curr -> next;
        }
        return curr;
    }
};