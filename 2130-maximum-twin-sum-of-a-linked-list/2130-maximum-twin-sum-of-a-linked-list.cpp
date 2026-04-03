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
    int pairSum(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* x=NULL;
        ListNode* c=slow;
        ListNode* n=NULL;
        while(c!=NULL){
            n=c->next;
            c->next=x;
            x=c;
            c=n;
        }
        int ans=INT_MIN;
        while(x){
            ans=max(ans,head->val+x->val);
            cout << head->val << " " << x->val << endl;
            head=head->next;
            x=x->next;
        }
        return ans;
    }
};