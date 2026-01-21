class Solution {
public:
void par(int n,int op,int cp,string str,vector<string>&ans){
    if(str.size()==2*n){
        ans.push_back(str);
        return;
    }
    if(op<n){
        par(n,op+1,cp,str+"(",ans);
    }
    if(cp<op){
        par(n,op,cp+1,str+")",ans);
    }
}
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string str;
        par(n,0,0,"",ans);
        return ans;
    }
};