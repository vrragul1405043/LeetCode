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
ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next)
            return head;
        
        ListNode* prev = head;
        ListNode* current = head;
        
        while(current && current->next)
        {
            if(current->val != current->next->val)
            {
                prev=current;
                current=current->next; 
            }
            else
            {
                while(current->next && (current->next->val == current->val))
                {    
                    ListNode* after = current->next;
                    current->next = after->next;
                    delete after;
                }
                if(current!=head)
                {    
                    prev->next = current->next;
                    delete current;
                    current=prev->next;
                }
                else
                {
                    head = current->next;
                    delete current;
                    current=prev=head;  
                }    
            }    
        }    
       return head; 
    }
};