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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* p=new ListNode(-1,head);
        ListNode* prev=p;

        ListNode* ptr=head;
        while(ptr!=NULL)
        {
            if(ptr->val==val)
            {
                prev->next=ptr->next;
                delete(ptr);
                ptr=prev->next;
            }
            else
            {
                ptr=ptr->next;
                prev=prev->next;
            }
        }

        head=p->next;
        delete(p);
        return head;
        
    }
};