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
    ListNode* mergeTwoSorted(ListNode *a, ListNode* b)
    {
        if(a==NULL) return b;
        if(b==NULL) return a;
        
        if(a->val<=b->val){
            a->next = mergeTwoSorted(a->next, b);
            return a;
        }
        else{
            b->next = mergeTwoSorted(a, b->next);
            return b;
        }
    }
    
    ListNode* mergeKLists(vector<ListNode*>& lists)
    {
        if(lists.size()==0) return NULL;
        while(lists.size() > 1){
            lists.push_back(mergeTwoSorted(lists[0], lists[1])); // time consuming 
            // erase first 2 heads of lists
            lists.erase(lists.begin()); // time consuming 
            lists.erase(lists.begin());
        }
        return lists[0];
    }
};