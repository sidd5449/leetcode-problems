/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    if(!head)
        return false;
    struct ListNode *one=head,*two=head->next;
    if (!two)
        return false;
    while(two != NULL) {
        if(one == two) 
            return true;
        one= one->next;
        two = two->next;
        if(two)
            two = two->next;
    }
    return false;
}