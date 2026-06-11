class Solution {
public:
int rec(string& text1, string& text2,int idx1,int idx2,vector<vector<int>>&dp){
    if(idx1<0 || idx2<0){
        return 0;
    }
    if(dp[idx1][idx2]!=-1)return dp[idx1][idx2];
    if(text1[idx1]==text2[idx2]){
        return dp[idx1][idx2]=1+rec(text1,text2,idx1-1,idx2-1,dp);
    }
    else{
        return dp[idx1][idx2]=max(rec(text1,text2,idx1-1,idx2,dp),rec(text1,text2,idx1,idx2-1,dp));
    }
}
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size(),m=text2.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return rec(text1,text2,n-1,m-1,dp);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna