/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* swapPairs(struct ListNode* head){
    if(!head || !head->next) return head;
    
    struct ListNode * rem = head->next->next;
    struct ListNode * newhead = head->next;
    head->next->next = head;
    head->next = swapPairs(rem);
    return newhead;
}

