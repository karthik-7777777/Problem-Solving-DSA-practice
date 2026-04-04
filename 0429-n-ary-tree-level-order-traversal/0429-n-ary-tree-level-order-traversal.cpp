/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        queue<Node*>q;
        vector<vector<int>>tretrav;
        if(!root)return tretrav;
        q.push(root);
        while(q.size()){
            vector<int>lev;
            int n=q.size();
            for(int i=0;i<n;i++){
                Node* nod=q.front();
                q.pop();
                lev.push_back(nod->val);
                if(nod->children.size()){
                    for(int j=0;j<nod->children.size();j++){
                        q.push(nod->children[j]);
                    }
                }
            }
            tretrav.push_back(lev);
        }
        return tretrav;
    }
};