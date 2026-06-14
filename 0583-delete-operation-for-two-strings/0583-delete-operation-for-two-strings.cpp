class Solution {
public:
int fun(string word1, string word2,int idx1,int idx2,vector<vector<int>>&dp){
    if(idx1<0 || idx2<0)return 0;
    if(dp[idx1][idx2]!=-1)return dp[idx1][idx2];
    if(word1[idx1]==word2[idx2]){
        return dp[idx1][idx2]=1+fun(word1,word2,idx1-1,idx2-1,dp);
    }
    else{
        return dp[idx1][idx2]=max(fun(word1,word2,idx1-1,idx2,dp),fun(word1,word2,idx1,idx2-1,dp));
    }
}
    int minDistance(string word1, string word2) {
        int n=word1.size(),m=word2.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        int ls=fun(word1,word2,n-1,m-1,dp);
        int ans=n+m-(2*ls);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna