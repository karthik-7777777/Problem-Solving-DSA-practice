class Solution {
public:
void comb(vector<int>& candidates, int target,int idx,int sum,vector<int>&com,set<vector<int>>&ans){
    if(sum==target){
        vector<int>comm(com.begin(),com.end());
        sort(comm.begin(),comm.end());
        ans.insert(comm);
        return;
    }
    if(sum>target || idx>=candidates.size()){
        return;
    }
    com.push_back(candidates[idx]);
    comb(candidates,target,idx+1,sum+candidates[idx],com,ans);
    com.pop_back();
    comb(candidates,target,idx+1,sum,com,ans);
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        set<vector<int>>ans;
        vector<int>com;
        comb(candidates,target,0,0,com,ans);
        vector<vector<int>>anss(ans.begin(),ans.end());
        return anss;
    }
};