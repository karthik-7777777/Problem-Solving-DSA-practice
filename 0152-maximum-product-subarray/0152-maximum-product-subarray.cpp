class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pre=1,suf=1,ans=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(pre==0)pre=1;
            pre*=nums[i];
            if(suf==0)suf=1;
            suf*=nums[n-1-i];
            ans=max(ans,max(pre,suf));
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna