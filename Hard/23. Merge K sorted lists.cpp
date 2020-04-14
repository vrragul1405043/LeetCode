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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int , vector<int>, greater<int>>min_heap;
        for(auto list : lists)
        {
            ListNode* head = list;
            while(head)
            {
                min_heap.push(head->val);
                head = head->next;
            }    
        }
        
        ListNode* current;
        ListNode* result = new ListNode(-1);
        current = result;
        
        while(!min_heap.empty())
        {
            current->next = new ListNode(min_heap.top());
            min_heap.pop();
            current = current->next;
        }    
        return result->next;
        
    }
};