class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[0]+nums[nums.size()-1];
    }
};