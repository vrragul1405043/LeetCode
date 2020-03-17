/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        if(!l1)
           return l2;
        
        if(!l2)
            return l1;
         
        ListNode* head = NULL;
        ListNode* recent_ptr = NULL;
        
        while(l1 && l2)
        {
            if(l1->val <= l2->val)
            {
                if(!head)
                {
                    head=l1;
                    recent_ptr=head;
                    l1=l1->next;
                }    
                else
                {
                    recent_ptr->next=l1;
                    recent_ptr=l1;
                    l1=l1->next;
                }    
            }//end if
            else
            {
                if(!head)
                {
                    head=l2;
                    recent_ptr=head;
                    l2=l2->next;
                }    
                else
                {
                    recent_ptr->next=l2;
                    recent_ptr=l2;
                    l2=l2->next;
                } 
            }
        }//end while
        while(l1)
        {
           recent_ptr->next=l1;
           recent_ptr=l1;
           l1=l1->next; 
        }
        while(l2)
        {
           recent_ptr->next=l2;
           recent_ptr=l2;
           l2=l2->next; 
        }
        recent_ptr->next=NULL;
        return head;
    }
};