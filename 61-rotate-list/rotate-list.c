struct ListNode* rotateRight(struct ListNode* head, int k) {
    struct ListNode* ptr;
    struct ListNode* nex;
    struct ListNode* temp;
    int len = 0;

    if (k == 0 || head == NULL || head->next == NULL)
        return head;

    /* find length */
    ptr = head;
    while (ptr != NULL) {
        len++;
        ptr = ptr->next;
    }

    /* normalize k */
    k = k % len;
    if (k == 0)
        return head;

    /* move nex k steps ahead */
    ptr = head;
    nex = head;
    while (k > 0) {
        nex = nex->next;
        k--;
    }

    /* move ptr and nex together */
    while (nex->next != NULL) {
        ptr = ptr->next;
        nex = nex->next;
    }

    /* re-arrange links */
    temp = ptr;
    ptr = ptr->next;
    temp->next = NULL;
    nex->next = head;
    head = ptr;

    return head;
}
