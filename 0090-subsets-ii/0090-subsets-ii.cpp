class Solution {
public:
void sub(vector<int>& nums,int idx,vector<int>ss,set<vector<int>>&ans){
    ans.insert(ss);
    for(int i=idx;i<nums.size();i++){
        ss.push_back(nums[i]);
        sub(nums,i+1,ss,ans);
        ss.pop_back();
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>ans;
        vector<int>ss;
        sub(nums,0,ss,ans);
        vector<vector<int>>anss(ans.begin(),ans.end());
        return anss;
    }
};