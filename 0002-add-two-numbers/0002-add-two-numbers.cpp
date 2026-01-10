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
    long long addigit(ListNode* l)
    {
        vector<int>dig;
        while(l)
        {
            dig.push_back(l->val);
            l=l->next;
        }
        long long total=0;
        reverse(dig.begin(),dig.end());
        for(auto i:dig)
        {
            total= total*10 + i;
        }
        return total;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        long long  x=addigit(l1);
        long long y=addigit(l2);
        long long tot=x+y;
        ListNode* temp=new ListNode(0);
        if(tot==0)
        {
            return temp;
        }
        ListNode* ans=temp;
        while(tot)
        {
            int r=tot%10;
            ListNode* NN=new ListNode(r);
            temp->next=NN;
            temp=temp->next;
            tot=tot/10;
        }
        return ans->next;
    }
};