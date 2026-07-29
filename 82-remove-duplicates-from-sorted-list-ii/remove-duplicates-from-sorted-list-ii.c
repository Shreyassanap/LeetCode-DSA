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

    int flag=0;

    struct ListNode* prev=(struct ListNode*)calloc(1,sizeof(struct ListNode));
    prev->next=head;
   
    struct ListNode*ptr=head;

    head=prev;

    while(ptr->next!=NULL)
    {
        
        if(ptr->val==ptr->next->val)
        {
            flag=1;
            ptr->next=ptr->next->next;
        }
        else if(flag==1)
        {
            prev->next=ptr->next;
            ptr=prev->next;
            flag=0;
        }
        else
        {
            prev=prev->next;
            ptr=prev->next;
        }
    }

    if(flag==1)
        prev->next=NULL;

    return head->next;
    
}