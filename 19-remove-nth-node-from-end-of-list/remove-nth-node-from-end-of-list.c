struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* slow = head;
    struct ListNode* fast = head;

    for (int i = 0; i < n; i++) {
        fast = fast->next;
    }

    // If fast is NULL, we're removing the head node
    if (fast == NULL) {
        struct ListNode* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    while (fast->next != NULL) {
        slow = slow->next;
        fast = fast->next;
    }

    struct ListNode* temp = slow->next;
    slow->next = slow->next->next;
    free(temp);

    return head;
}
