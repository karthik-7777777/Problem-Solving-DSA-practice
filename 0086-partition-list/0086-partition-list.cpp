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
        ListNode* ans=new ListNode(0);
        ListNode* dummy=ans;
        queue<ListNode*>temp;
        while(head){
            if(head->val < x){
                dummy->next=head;
                dummy=dummy->next;
            }
            else temp.push(head);
            head=head->next;
        }
        while(temp.size()){
            dummy->next=temp.front();
            dummy=dummy->next;
            temp.pop();
        }
        dummy->next=nullptr;
        return ans->next;
    }
};