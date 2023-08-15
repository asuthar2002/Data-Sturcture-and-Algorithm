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
        ListNode*node = head;
        vector<int> ans;
        vector<int> arr;
        while(node){
            ans.push_back(node->val);
            node = node->next;
        }
        for(int i=0;i<ans.size(); i++){
            if(ans[i]<x) {
                arr.push_back(ans[i]);
                ans.erase(ans.begin()+i);
                i--;
            }
        }
    // for(auto it: arr) cout<<it<<" ";
        for(auto it:ans) arr.push_back(it);
        node = head;
        for(int i=0; i<arr.size(); i++){
            node->val = arr[i];
            node = node->next;
        }
        return head;
    }
};