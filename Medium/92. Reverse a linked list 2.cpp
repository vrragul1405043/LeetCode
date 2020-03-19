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
    
        ListNode* reverse(ListNode* head, ListNode* prev, int diff)
    {
        ListNode* temp = head;
        while(diff>=0 && temp)
        {
            ListNode* after = temp->next;
            temp->next = prev;
            prev = temp;
            temp=after;
            diff--;
        }
        return prev;
    }    
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if(!head)
            return NULL;
        if(!head->next || (m==n))
            return head;
        
        ListNode* current = head;
        ListNode* prev = head;
        ListNode* temp = head;
        int i=1;
        while(i<=n && temp)
        {
            if(i<m)
            {
                prev=current;
                current=current->next; 
            }
            else if(i==m)
            {
                temp = current;
                temp=temp->next;
            }
            else
            {
                temp=temp->next;
            }    
            ++i;
        }
        if(m==1)
        {
            head = reverse(current,temp,n-m);
        }    
        else if(prev==head)
        {
            head->next = reverse(current,temp,n-m);    
        }
        else
        {
            prev->next = reverse(current,temp,n-m);
        }    
        return head;
    }
};
