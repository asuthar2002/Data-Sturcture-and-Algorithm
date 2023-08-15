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
    ListNode* partition(ListNode* head, int x) {
        ListNode*bignumber = new ListNode(-1);
        ListNode*smallnumber = new ListNode(-1);
        ListNode*bignode = bignumber;
        ListNode*smallnode = smallnumber;
        ListNode*node = head;
        while(node){
            if(node->val<x) {
                smallnode->next = new ListNode(node->val);
                smallnode = smallnode->next;
            }
            else {
                bignode->next = new ListNode(node->val);
                bignode = bignode->next;
            }
             node = node->next;
        }
        smallnode->next = bignumber->next;
        return smallnumber->next;
    }
};