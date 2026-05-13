class Solution {
public:
int rec(int m,int n,vector<vector<int>>& grid,vector<vector<int>>& dp,int i,int j){
    if(i>=m || j>=n || i<0 || j<0)return INT_MAX;
    if(i==0 && j==0)return dp[0][0];
    if(dp[i][j]!=-1)return dp[i][j];
    return dp[i][j]=grid[i][j]+min(rec(m,n,grid,dp,i-1,j),rec(m,n,grid,dp,i,j-1));
}
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        dp[0][0]=grid[0][0];
        if(m==1&&n==1)return dp[0][0];
        int i=m-1,j=n-1;
        return dp[i][j]=grid[i][j]+min(rec(m,n,grid,dp,i-1,j),rec(m,n,grid,dp,i,j-1));
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna