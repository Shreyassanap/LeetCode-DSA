struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode* ptr1 = headA;
    struct ListNode* ptr2 = headB;

    int len1 = 0, len2 = 0;

    while (ptr1 != NULL) {
        ptr1 = ptr1->next;
        len1++;
    }
    while (ptr2 != NULL) {
        ptr2 = ptr2->next;
        len2++;
    }

    int diff = len1 - len2;

    ptr1 = headA;
    ptr2 = headB;

    if (diff > 0) {
        while (diff--) ptr1 = ptr1->next;
    } else { 
        diff = -diff;
        while (diff--) ptr2 = ptr2->next;
    }

    while (ptr1 != NULL && ptr2 != NULL) {
        if (ptr1 == ptr2)
            return ptr1;
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return NULL;
}
