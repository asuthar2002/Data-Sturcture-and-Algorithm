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
    ListNode* code(ListNode*root){
        ListNode*temp= NULL;
        ListNode*curr =root;
        ListNode*net = root->next;
        while(curr->next!=NULL){
            curr->next = temp;
            temp = curr;
            curr = net;
            net = net->next;
        }
        curr->next  = temp;
        return curr;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*r1 = code(l1);
        ListNode*r2 = code(l2);
        ListNode*temp = new ListNode(0);
        int rem = 0;
        ListNode*head = temp;
        while(r1 || r2){
            int v1,v2;
            r1 == NULL?v1 = 0:v1 = r1->val;
            r2==NULL?v2 = 0:v2 = r2->val; 
            int a= (v1+v2+rem);
            ListNode* net = new ListNode(a%10);
            (a>9)?rem = a/10:rem =0;
            temp->next = net;
            temp = temp->next;
            if(r1) r1 = r1->next;
            if(r2) r2 = r2->next;
        }
        if(rem>0)temp->next = new ListNode(rem);
        return code(head->next);
    }
};