class Solution {
public:
int fun(vector<int>&dp,int idx){
    if(idx <= 1)return idx;
    if(dp[idx]!=-1)return dp[idx];
    dp[idx]=idx%2 + fun(dp,idx/2);
    return dp[idx];
}
    vector<int> countBits(int n) {
        if(n==0)return {0};
        vector<int>dp(n+1,-1);
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=fun(dp,i);
        }
        return dp;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna