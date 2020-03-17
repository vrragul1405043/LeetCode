/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
        if(!head)
        {
            return NULL;
        }
        if(!head->next)
        {
            if(head->val==val)
            {
                free(head);
                return NULL;
            }
            else
            {
                return head;
            }    
        }    
        struct ListNode* current=head;
        struct ListNode* prev = head;
        while(current)
        {
            if(current->val==val)
            {
                if(current==head)
                {
                    head=head->next;
                    free(current);
                    current=head;
                    prev=head;
                }
                else
                {
                    prev->next=current->next;
                    free(current);
                    current=prev->next;
                }    
            }
            else
            {
                prev=current;
                current=current->next;
            }    
        }    
        return head;
}