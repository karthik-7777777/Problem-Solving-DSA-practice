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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if(!head)return NULL;
        if(!head->next){
            TreeNode* root=new TreeNode(head->val);
            return root;
        }
        ListNode* pre=NULL;
        ListNode* m=head;
        ListNode* e=head;
        while(e && e->next){
            pre=m;
            m=m->next;
            if(e->next->next)e=e->next->next;
            else e=e->next;
        }
        pre->next=NULL;
        TreeNode* root=new TreeNode(m->val);
        root->left=sortedListToBST(head);
        root->right=sortedListToBST(m->next);
        return root;
    }
};



// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna