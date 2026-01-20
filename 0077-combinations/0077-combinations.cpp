class Solution {
public:
void comb(int n, int k,int idx,vector<int>&com,vector<vector<int>>&ans){
    if(com.size()==k){
        ans.push_back(com);
        return;
    }
    for(int i=idx;i<=n;i++){
        com.push_back(i);
        comb(n,k,i+1,com,ans);
        com.pop_back();
    }
}
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>com;
        comb(n,k,1,com,ans);
        return ans;
    }
};