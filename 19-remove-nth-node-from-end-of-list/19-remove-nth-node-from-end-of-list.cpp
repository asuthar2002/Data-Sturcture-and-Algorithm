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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(not head) return NULL;
        ListNode*node = head;
        int cnt = 0;
        while(node)
        {
            node = node->next;
            cnt++;
        }
        if(cnt == n) return head->next;
        node = head;
        int k = cnt-n;
        while(k!=1)
        {
            node = node->next;
            k--;
        }
        // cout<<node->val;
        node->next = node->next->next;
        return head;
        
    }
};