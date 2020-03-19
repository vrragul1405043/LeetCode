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
    
    ListNode* reverseList(ListNode* head) {
        
        if(head==NULL || head->next==NULL)
        {
            return head;
        }    
        ListNode* prev = NULL;
        ListNode* current = head;
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