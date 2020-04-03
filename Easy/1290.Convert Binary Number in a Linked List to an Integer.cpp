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
        if(!head)
            return 0;
        if(!head->next)
            return head->val;
        
        int res = 0;
        ListNode* ptr = head;
        
        while(ptr)
        {
            res = (res << 1) + ptr->val;
            ptr = ptr->next;   
        }
        return res;
    }
};