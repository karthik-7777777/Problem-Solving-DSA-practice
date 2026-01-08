class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1;
        vector<int>ans;
        while(start<=end){
            int sum=nums[start]+nums[end];
            if(sum==target){
                ans.push_back(start+1);
                ans.push_back(end+1);
                return ans;
            }
            else if(sum < target){
                start++;
            }
            else end--;
        }
        return ans;
    }
};