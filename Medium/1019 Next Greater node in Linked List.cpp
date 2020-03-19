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
    vector<int> nextLargerNodes(ListNode* head) {
        
        vector<int> res, stack;
        if(!head)
            return res;
        if(!head->next)
        {
            res.push_back(0);
            return res;
        }    
        
        for(auto p = head; p!=NULL; p=p->next)
           res.push_back(p->val);
        
        for(int i = res.size()-1; i>=0; i--)
        {
            while(!stack.empty() && stack.back()<=res[i])
                stack.pop_back();
            int val = res[i];
            res[i]=(stack.empty())?0:stack.back();
            stack.push_back(val);        
        }    
     return res;
    }
};