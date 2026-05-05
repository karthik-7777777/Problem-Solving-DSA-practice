class Solution {
public:
void rec(int n,int l,int r,string s,vector<string>& ans){
    if(r>n || l>n){
        return;
    }
    if(l==r && (l+r)/2 == n){
        ans.push_back(s);
        return;
    }
    rec(n,l+1,r,s+'(',ans);
    if(l>r){
        rec(n,l,r+1,s+')',ans);
    }
}
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string s="";
        rec(n,0,0,s,ans);
        return ans;
    }
};