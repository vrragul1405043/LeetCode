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
    ListNode* rotateRight(ListNode* head, int k) { 
        if(!head || !head->next || k==0)
            return head; 
        int len = 1;
        ListNode* current=head;
        while(current->next && ++len) current=current->next;
        k=k%len;
        current->next=head;
        int stepsToNewHead = len-k;
        while(stepsToNewHead--)
            current=current->next;    
        head=current->next;
        current->next=NULL;
        return head;
    }
};