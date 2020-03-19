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
    bool isPalindrome(ListNode* head) {
        
        if(head==NULL || head->next==NULL)
        {
            return true;
        }    
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* toBeReversed = (fast)?slow->next:slow;
        ListNode* reversedHead = reverse(toBeReversed);
        
        ListNode* head2 = reversedHead;
        ListNode* head1 = head;
        
        while(head1 && head2)
        {
            if(head1->val!=head2->val)
            {
                return false;
            }
            else
            {
                head1=head1->next;
                head2=head2->next;
            }    
        }    
        return true;  
    }
    
    ListNode* reverse(ListNode* head)
    {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        ListNode* current = head;
        ListNode* prev = NULL;
        
        while(current!=NULL)
        {
            ListNode* after = current->next;
            current->next=prev;
            prev=current;
            current=after;
        }
        return prev;
    }    
    
    
};