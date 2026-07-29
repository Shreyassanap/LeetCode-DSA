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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL || head->next->next==NULL)
            return head;
        ListNode* head1=head->next;
        ListNode* current=head;
        ListNode* next=head->next;
        while(current->next!=NULL && current->next->next!=NULL)
        {
            current->next=next->next;
            current=next->next;
            next->next=current->next;
            next=current->next;
        }
        
        current->next=head1;
        return head;        
    }
};