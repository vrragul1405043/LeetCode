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
        ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(!head)
            return NULL;
        
        if(!head->next && n==1)
        {
            delete head;
            return NULL;
        }    
        
        ListNode* p = head;
        ListNode* q = head;
        ListNode* r = head;
        
        for(int i=0;i<n;i++)
        {
            r=r->next;
        }
        while(r)
        {
            p=q;
            q=q->next;
            r=r->next;
        }
        if(q==head)
        {
            head=head->next;
        }
        else
        {
            p->next=q->next;  
        }
        delete q;
        return head;
    }
};