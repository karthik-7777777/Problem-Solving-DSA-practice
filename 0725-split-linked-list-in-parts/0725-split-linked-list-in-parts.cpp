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
int findsize(ListNode* head){
    int n=0;
    while(head){
        n++;
        head=head->next;
    }
    return n;
}
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
          int n=findsize(head);
          vector<ListNode*>ans;
          int d=k;
          if(n<k){
            while(head || d)
            {
                if(head){
                    ListNode* NN=new ListNode(head->val);
                    ans.push_back(NN);
                    head=head->next;
                    d--;
                }
                else {
                    ListNode* NN=new ListNode(0);
                    ans.push_back(NN->next);
                    d--;
                }
            }
            return ans;
          }
          int x=n%k;
          while(x){
            ListNode* Nlist=new ListNode(0);
            ListNode* dum=Nlist;
            int i=0;
             while(head && i<=(n/k)){
                ListNode* NN=new ListNode(head->val);
                dum->next=NN;
                dum=dum->next;
                head=head->next;
                i++;
             }
             ans.push_back(Nlist->next);
             x--;
          }
          int rem=k-(n%k);
          while(rem){
            ListNode* Nlist=new ListNode(0);
            ListNode* dum=Nlist;
            int i=0;
             while(head && i<=(n/k)-1){
                ListNode* NN=new ListNode(head->val);
                dum->next=NN;
                dum=dum->next;
                head=head->next;
                i++;
             }
             ans.push_back(Nlist->next);
             rem--;
          }
          return ans;
    }
};