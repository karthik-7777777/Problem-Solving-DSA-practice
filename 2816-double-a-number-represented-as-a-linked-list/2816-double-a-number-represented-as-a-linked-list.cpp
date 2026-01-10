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
    ListNode* doubleIt(ListNode* head) {
        stack<int>ll,ll2;
        ListNode* ans=new ListNode(0);
        ListNode* dummy=ans;
        int tot=0,rem=0;
        while(head){
            ll.push(head->val);
            head=head->next;
        }
        while(ll.size()||rem){
            tot=rem;
            int k;
            if(ll.size()){
                int top=ll.top();
                ll.pop();
                k=top*2;
            }
            else k=0;
            int x=tot+k;
            ll2.push(x%10);
            rem=x/10;
        }
        while(ll2.size()){
            int top=ll2.top();
            ll2.pop();
            ListNode* NN=new ListNode(top);
            dummy->next=NN;
            dummy=dummy->next;
        }
        return ans->next;
    }
};