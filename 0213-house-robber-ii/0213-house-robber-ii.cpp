class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        if(n==2)return max(nums[0],nums[1]);
        vector<int>dp(n-1,0);
        vector<int>dp2(n-1,0);
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        dp2[0]=nums[1];
        dp2[1]=max(nums[1],nums[2]);
        for(int i=2;i<n-1;i++){
            dp[i]=max(dp[i-1],nums[i]+dp[i-2]);
        }
        for(int i=3;i<n;i++){
            dp2[i-1]=max(dp2[i-2],nums[i]+dp2[i-3]);
        }
        cout << dp[n-2] << " " << dp2[n-2];
        return max(dp[n-2],dp2[n-2]);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna