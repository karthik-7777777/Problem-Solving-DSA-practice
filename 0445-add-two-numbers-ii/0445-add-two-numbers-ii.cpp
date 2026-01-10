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
stack<ListNode*>trav(ListNode* ll)
{
    stack<ListNode*>temp;
    if(ll==NULL)return temp;
    while(ll)
    {
        temp.push(ll);
        ll=ll->next;
    }
    return temp;
}
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<ListNode*>ll1=trav(l1);
        stack<ListNode*>ll2=trav(l2);
        stack<int>temp;
        ListNode* ans=new ListNode(0);
        ListNode* dummy=ans;
        int tot=0,rem=0;
        while(ll1.size()||ll2.size()||rem){
            tot=rem;
            if(ll1.size()){
                ListNode* x=ll1.top();
                ll1.pop();
                tot+=x->val;
            }
            if(ll2.size()){
                ListNode* x=ll2.top();
                ll2.pop();
                tot+=x->val;
            }
            temp.push(tot%10);
            rem=tot/10;
        }
        while(temp.size())
        {
            ListNode* NN=new ListNode(temp.top());
            temp.pop();
            dummy->next=NN;
            dummy=dummy->next;
        }
        return ans->next;
    }
};