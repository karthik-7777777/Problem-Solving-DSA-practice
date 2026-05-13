class Solution {
public:
int rec(int m,int n,vector<vector<int>>&dp,int i,int j){
    if(i>=m || j>=n || i<0 || j<0){
        return 0;
    }
    if(i==0 && j==0)return dp[i][j];
    if(dp[i][j]>0)return dp[i][j];
    return dp[i][j]=rec(m,n,dp,i,j-1)+rec(m,n,dp,i-1,j);
}
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,0));
        int i=m-1,j=n-1;
        dp[0][0]=1;
        if(m==1 && n==1)return dp[0][0];
        return dp[i][j]=rec(m,n,dp,i,j-1)+rec(m,n,dp,i-1,j);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna