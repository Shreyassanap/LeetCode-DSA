class Solution {
public:

    struct compare {
        bool operator()(ListNode* a, ListNode* b) {
            return a->val > b->val;
        }
    };

    ListNode* mergeKLists(vector<ListNode*>& lists) {

        priority_queue<ListNode*, vector<ListNode*>, compare> q;

        ListNode* dummy = new ListNode(0);
        ListNode* ptr = dummy;

        for (int i = 0; i < lists.size(); i++) {
            if (lists[i] != NULL)
                q.push(lists[i]);
        }

        while (!q.empty()) {

            ListNode* current = q.top();
            q.pop();

            ptr->next = current;
            ptr = current;

            if (current->next != NULL)
                q.push(current->next);
        }

        return dummy->next;
    }
};