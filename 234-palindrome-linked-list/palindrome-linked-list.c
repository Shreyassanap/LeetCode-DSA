/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {

    struct ListNode * ptr=head;
    int *arr=(int*)malloc(100000*sizeof(int));
    int i=0;
    while(ptr!=NULL)
    {
        arr[i]=ptr->val;
        i++;
        ptr=ptr->next;        
    }

    for(int j=0;j<i;j++)
    {
        if(arr[j]!=arr[i-j-1])
        {
            free(arr);
            return false;
        }
    }

    free(arr);
    return true;    

}