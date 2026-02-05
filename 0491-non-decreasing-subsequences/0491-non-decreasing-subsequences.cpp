class Solution {
public:
void fin(vector<int>nums,vector<int>a,int idx,set<vector<int>>&ans){
    if(idx==nums.size()){
        if(a.size()>1){
            ans.insert(a);
        }
        return;
    }
    if(a.size()>1){
        ans.insert(a);
    }
    for(int i=idx+1;i<nums.size();i++){
        if(nums[i]>=a[a.size()-1]){
            a.push_back(nums[i]);
            fin(nums,a,i,ans);
            a.pop_back();
        }
    }
}
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>>ans;
        int n=nums.size();
        vector<int>a;
        for(int i=0;i<n;i++){
            a.push_back(nums[i]);
            fin(nums,a,i,ans);
            a.pop_back();
        }
        vector<vector<int>>anss(ans.begin(),ans.end());
        return anss;
    }
};