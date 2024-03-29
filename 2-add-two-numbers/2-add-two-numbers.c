/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *createNode(int val){
    struct ListNode *n = malloc(sizeof(struct ListNode));
    n->next = NULL; 
    n->val = val;
    return n;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    int carry = 0, num, remainder;
    struct ListNode *tail = NULL;
    struct ListNode *head;
    
    while(l1 !=NULL || l2 != NULL){
        if(l1 != NULL && l2 != NULL){
            num = l1-> val + l2->val;
            l1 = l1 ->next; 
            l2 = l2->next;
            
        }
        else if(l1 != NULL){
            num = l1->val;
            l1 = l1->next;
        }
        else{
            num = l2->val;
            l2 = l2->next;
        }
        remainder = (num + carry) %10;
        
        struct ListNode *node = createNode(remainder);
        if(tail == NULL){
            head = node;
            tail = node;
        }
        else{
            tail->next = node;
            tail = node;
        }
        carry = (num+carry)/10;
        
        
    }
    if(carry!=0){
            struct ListNode *node = createNode(carry);
            tail->next = node;
            tail = node;
    }
    return head;
}