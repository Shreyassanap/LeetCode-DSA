/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {

    if(head==NULL || head->next==NULL)
        return head;

    struct ListNode* ptr=head;
    struct ListNode* next=ptr->next;

    while(next!=NULL)
    {
        if(ptr->val==next->val)
        {
            next=next->next;
            ptr->next=next;
        }
        else
        {
            ptr=ptr->next;
            next=next->next;
        }
    }

    free(next);

    return head;
    
}