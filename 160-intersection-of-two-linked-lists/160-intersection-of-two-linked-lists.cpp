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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode*l1 = headA;
        ListNode*l2 = headB;
        int cnt1 = 0 , cnt2 = 0;
        
        while(l1) cnt1++, l1 = l1->next;
        while(l2) cnt2++, l2 = l2->next;
        
        int t = abs(cnt2-cnt1);
        l1 = headA;
        l2 = headB;
        
        if(cnt1<cnt2)   while(t--) l2 = l2->next;
        else    while(t--) l1 = l1->next;
        
        while(l1!=l2)
        {
            l1 = l1->next;
            l2 = l2->next;
        }
        return l2;
    }
};