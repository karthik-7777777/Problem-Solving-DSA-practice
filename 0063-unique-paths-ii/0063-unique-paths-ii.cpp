class Solution {
public:
int fun(vector<vector<int>>& Grid,vector<vector<int>>& dp,int i,int j){
    if(i<0 || i>=Grid.size() || j<0 || j>=Grid[0].size() || Grid[i][j]==1){
        return 0;
    }
    if((i==0 && j==0) || dp[i][j]!=-1)return dp[i][j];
    dp[i][j]=fun(Grid,dp,i-1,j)+fun(Grid,dp,i,j-1);
    return dp[i][j];
}
    int uniquePathsWithObstacles(vector<vector<int>>& Grid) {
        int m=Grid.size(),n=Grid[0].size();
        if(Grid[m-1][n-1]==1)return 0;
        if(m==1 && n==1)return 1;
        vector<vector<int>>dp(m,vector<int>(n,-1));
        dp[0][0]=1;
        int i=m-1,j=n-1;
        dp[i][j]=fun(Grid,dp,i-1,j)+fun(Grid,dp,i,j-1);
        return dp[i][j];   
    }
};