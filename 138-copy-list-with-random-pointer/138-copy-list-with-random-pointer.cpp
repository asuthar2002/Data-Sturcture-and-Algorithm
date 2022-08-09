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
    void copyLinkedList(Node*head)
    {
        if(!head ) return ;
        Node*temp = head;
        Node*curr = head->next;
        while(temp)
        {
            Node* copy = new Node(temp->val);
            temp->next = copy;
            copy->next = curr;
            temp = curr;
            if(curr)curr = curr->next;
        }
    }
    void copyRandompointer(Node*head)
    {
        if(!head) return ;
        Node*temp = head;
        while(temp)
        {
            if(temp->random == nullptr){
                temp->next->random = NULL;
                temp = temp->next->next;
            }
            else {
                temp->next->random = temp->random->next;
                temp = temp->next->next;
            }
        }
    }
    Node* removeRandom(Node*head)
    {
        if(!head)return NULL;
        Node*dummy = new Node(-1);
        Node*curr = dummy;
        Node*temp = head;
        while(temp!=NULL)
        {
            curr->next = temp->next;
            curr = temp->next;
            temp->next = curr->next;
            temp = temp->next;
        }
        return dummy->next; 
    }
    Node* copyRandomList(Node* head) {
        copyLinkedList(head); 
        copyRandompointer(head); 
        // print(head);
        return removeRandom(head);
        
        
        return NULL;
    }
};