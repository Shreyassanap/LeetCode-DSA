/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) 
{

if (list1 == NULL) return list2;
if (list2 == NULL) return list1;


struct ListNode* head=NULL;
struct ListNode* ptr=head;

struct ListNode* ptr1=list1;
struct ListNode* ptr2=list2;

if(ptr1!=NULL && ptr2!=NULL){
    if( (ptr1->val) < (ptr2->val))
    {
        head=ptr1;
        ptr=head;
        ptr1=ptr1->next;
    }
    else
    {
        head=ptr2;
        ptr=head;
        ptr2=ptr2->next;
    }
}

while(ptr1!=NULL && ptr2!=NULL)
{
    if( ptr1->val < ptr2->val )
    {
        ptr->next=ptr1;
        ptr=ptr->next;
        ptr1=ptr1->next;
    }
    else
    {
        ptr->next=ptr2;
        ptr=ptr->next;
        ptr2=ptr2->next;
    }
}

while(ptr1!=NULL)
{
    ptr->next=ptr1;
    ptr=ptr->next;
    ptr1=ptr1->next;
}

while(ptr2!=NULL)
{
    ptr->next=ptr2;
    ptr=ptr->next;
    ptr2=ptr2->next;

}
    return head;
}