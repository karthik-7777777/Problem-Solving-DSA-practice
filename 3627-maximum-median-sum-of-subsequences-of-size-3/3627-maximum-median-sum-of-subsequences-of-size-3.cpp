class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int n=nums.size()/3;
        long long ans=0;
        for(int i=1;i<nums.size();i+=2){
            ans+=nums[i];
            n--;
            if(n==0)break;
        }
        return ans;
    }
};