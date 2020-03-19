/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head)
            return NULL;
        
        Node* current = head;
        Node* temp=head;
        
        while(current)
        {
            Node *tmp = new Node(current->val, current->next, NULL);
            current->next=tmp;
            current=tmp->next;
        }
        current = head;
        while(current)
        {
            temp = current->next;
            if(current->random)
                temp->random = current->random->next;
            current = temp->next;
        }
        
        current=head;
        Node* deepCopy = current->next;
        
        while(current)
        {
            temp = current->next;
            current->next = temp->next;
            current=current->next;
            if(current)
                temp->next = current->next;
        }    
        return deepCopy;
    }
};