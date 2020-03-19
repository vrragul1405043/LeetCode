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
    
    int getDecimalValue(ListNode* head) {
        
        if(!head->next)
            return head->val;
        
        int solution = 0;
        while(head)
        {
            solution = solution<<1;
            solution += head->val;
            head=head->next;
        }    
        return solution;
    }
};