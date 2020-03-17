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
  int lengthOfList (ListNode * head)
  {
    if (head == NULL)
      {
	return 0;
      }
    return 1 + lengthOfList (head->next);
  }
  ListNode *getIntersectionNode (ListNode * headA, ListNode * headB)
  {

    if (!headA || !headB)
      return NULL;

    int m = lengthOfList (headA);
    int n = lengthOfList (headB);

    int diff = 0;

    if (m >= n)
      {
	diff = m - n;
	for (int i = 0; i < diff; i++)
	  {
	    headA = headA->next;
	  }
      }
    else
      {
	diff = n - m;
	for (int i = 0; i < diff; i++)
	  {
	    headB = headB->next;
	  }
      }

    while (headA != headB && headA && headB)
      {
	headA = headA->next;
	headB = headB->next;
      }
    if (headA == headB)
      return headA;
    else
      return NULL;
  }
};
