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
    ListNode* reverseKGroup(ListNode* head, int k) {
        stack<int>stk;
        ListNode* ans=new ListNode(0);
        ListNode* nn=ans;
        while(head){
            if(stk.size()<k){
                stk.push(head->val);
                head=head->next;
            }
            else if(stk.size()==k){
                while(stk.size()){
                    ListNode* n=new ListNode(stk.top());
                    nn->next=n;
                    stk.pop();
                    nn=nn->next;
                }
            }
        }
        if(stk.size()<k){
            vector<int>a;
            while(stk.size()){
                a.push_back(stk.top());
                stk.pop();
            }
            reverse(a.begin(),a.end());
            for(int i=0;i<a.size();i++){
                ListNode* n=new ListNode(a[i]);
                nn->next=n;
                nn=nn->next;
            }
        }
        else{
            while(stk.size()){
            ListNode* n=new ListNode(stk.top());
            nn->next=n;
            stk.pop();
            nn=nn->next;
          }
        }
        return ans->next;
    }
};