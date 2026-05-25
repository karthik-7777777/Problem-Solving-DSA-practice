class Solution {
public:
int fun(vector<int>& nums,vector<int>& dp,int idx){
    if(idx<0)return 0;
    if(idx<=1)return nums[idx];
    if(dp[idx]!=-1)return dp[idx];
    for(int i=idx-2;i>=0;i--){
        dp[idx]=max(dp[idx],nums[idx]+fun(nums,dp,i));
    }
    return dp[idx];
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        if(n==2)return max(nums[0],nums[1]);
        if(n==3)return max(nums[0]+nums[2],nums[1]);
        vector<int>dp(n,-1);
        for(int i=n-3;i>=0;i--){
            dp[n-1]=max(dp[n-1],nums[n-1]+fun(nums,dp,i));
        }
        for(int i=n-4;i>=0;i--){
            dp[n-2]=max(dp[n-2],nums[n-2]+fun(nums,dp,i));
        }
        return max(dp[n-1],dp[n-2]);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna