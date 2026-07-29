/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL)
            return head;

        ListNode* head1=new ListNode();
        ListNode* head2=new ListNode();
        ListNode* head11=head1;
        ListNode* head22=head2;
        

        ListNode* ptr=head;

        while(ptr)
        {
            if(ptr->val<x){
                head11->next=ptr;
                head11=head11->next;
            }
            else
            {
                head22->next=ptr;
                head22=head22->next;
            }
            ptr=ptr->next;
        }
        head11->next=head2->next;
        head22->next=NULL;
        head=head1->next;
        delete(head1);
        delete(head2);
        return head;
        
    }
};