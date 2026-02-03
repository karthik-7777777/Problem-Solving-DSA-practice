class Solution {
public:
void per(vector<int>nums,vector<int>a,vector<vector<int>>&ans){
    if(a.size()==nums.size()){
        ans.push_back(a);
        return;
    }
    for(int i=0;i<nums.size();i++){
        if(find(a.begin(),a.end(),nums[i])==a.end()){
            a.push_back(nums[i]);
            per(nums,a,ans);
            a.pop_back();
        }
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>a;
        per(nums,a,ans);
        return ans;
    }
};