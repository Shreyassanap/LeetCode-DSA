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
    ListNode* sortList(ListNode* head) {
        vector<int> arr;
        ListNode* current=head;
        while(current!=NULL)
        {
            arr.push_back(current->val);
            current=current->next;
        }
        current=head;
        sort(arr.begin(),arr.end());
        int i=0;
        while(current!=NULL)
        {
            current->val=arr[i++];
            current=current->next;
        }

        return head;
    }
};