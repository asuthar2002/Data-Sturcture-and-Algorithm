/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
     int length(ListNode*head)
    { 
        if(not head) return 0;int len = 0;
        ListNode*curr = head;
        while(curr!=NULL) {len++; curr = curr->next;}
        return len;
    }
    ListNode* code(ListNode*head, int k, int len)
    {
        int a = len-k-1;
        ListNode*curr = head;
        while(a--)
        {
            curr = curr->next;
        }
        ListNode*nxt = curr->next;
        ListNode*temp  = nxt;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = head;
        curr->next = NULL;
        return nxt;
    }
    
    ListNode* rotateRight(ListNode* head, int k) {
        if(not head) return NULL;
        int len = length(head);
        if(len == k || k%len == 0) return head;
        if(head->next == NULL || k==0) return head;
        k = k%len;
        return code(head,k,len);
    }
};