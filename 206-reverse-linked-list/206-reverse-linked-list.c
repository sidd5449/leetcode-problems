/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){

    if(head == NULL) return NULL;
    
    struct ListNode *current = head;
    struct ListNode *back = NULL;
    struct ListNode *front = NULL;
    
    while(current != NULL) {
        front = current->next;
        current->next = back;
        back = current;
        current = front;        
    }
    
    return back;
}