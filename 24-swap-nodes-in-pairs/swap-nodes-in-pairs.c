/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode* ptr=head;
  
    while(ptr!=NULL)
    {
        struct ListNode* prev=ptr;
        ptr=ptr->next;

        if(ptr==NULL)
            break;
    
        struct ListNode* nex=ptr->next;

        if(prev==head)
        {
            prev->next=nex;
            ptr->next=prev;
            head=ptr;
            ptr=ptr->next;
        }
        else if(nex==NULL)
        {
            break;
        }
        else
        {
            ptr->next=nex->next;
            nex->next=ptr;
            prev->next=nex;
        }
    }
    return head;    
}