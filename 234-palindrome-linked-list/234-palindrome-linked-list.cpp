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
    ListNode* getmid(ListNode*head)
    {
        if(not head ) return nullptr ;
        
        ListNode*slow = head;
        ListNode*fast = head->next;
        while(fast && fast->next )
        {
            slow = slow->next;
            fast = fast->next;
            if(fast->next) fast = fast->next;
        }
        // cout<<slow->val<<" "<<fast->val<<" ";
        return slow;
    }
    
    ListNode* reverse(ListNode*head)
    {
        if(not head) return nullptr;
        // cout<<head;
        ListNode*pre = NULL;
        ListNode*curr = head;
        ListNode*nxt ;
        while(curr){
            nxt = curr->next;
            curr->next = pre;
            pre = curr;
            curr = nxt;
        }
        // cout<<pre->val;
        return pre;
    }
    
    bool isPalindrome(ListNode* head) {
        if(not head->next) return true;
        bool ans = true;
        ListNode*mid = getmid(head);
        ListNode* temp = mid->next;
        mid->next = reverse(temp);
        ListNode*curr = mid->next;
        ListNode*temp1 = head;
        while(curr)
        {
            if(temp1->val != curr->val) ans =  false;
            temp1 = temp1->next;
            curr = curr->next;
        }
        temp = mid->next;
        mid->next = reverse(temp);
            
        
        return ans;
    }
};