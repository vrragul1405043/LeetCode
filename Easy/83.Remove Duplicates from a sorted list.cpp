/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
  ListNode * deleteDuplicates (ListNode * head)
  {
    if (!head || !head->next)
      {
	return head;
      }
    ListNode *current = head;
    while (current && current->next)
      {
	if (current->val != current->next->val)
	  {
	    current = current->next;
	  }
	else
	  {
	    ListNode *temp = current->next;
	    current->next = current->next->next;
	    delete temp;
	  }
      }
    return head;
  }
};
