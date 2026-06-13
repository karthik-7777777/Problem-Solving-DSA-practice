class Solution {
public:
int fun(const string& s,const string& p,int idx1,int idx2,vector<vector<int>>&dp){
    if(idx1<0 && idx2<0){
        return 1;
    }
    if(idx1>=0 && idx2<0){
        return 0;
    }
    if(idx1<0 && idx2>=0){
        for(int i=0;i<=idx2;i++){
            if(p[i]!='*')return 0;
        }
        return 1;
    }
    if(dp[idx1][idx2]!=-1)return dp[idx1][idx2];
    if(s[idx1]==p[idx2]){
        return dp[idx1][idx2]=fun(s,p,idx1-1,idx2-1,dp);
    }
    else if(s[idx1]!=p[idx2] && p[idx2]=='?'){
        return dp[idx1][idx2]=fun(s,p,idx1-1,idx2-1,dp);
    }
    else if(s[idx1]!=p[idx2] && p[idx2]=='*'){
        return dp[idx1][idx2]=fun(s,p,idx1-1,idx2,dp) | fun(s,p,idx1,idx2-1,dp);
    }
    return 0;
}
    bool isMatch(string s, string p) {
        int n=s.size(),m=p.size();
        if(n==0){
            for(int i=0;i<m;i++){
            if(p[i]!='*')return 0;
            }
            return 1;
        }
        if(m==0 && n>0)return false;
        vector<vector<int>>dp(n,vector<int>(m,-1));
        dp[n-1][m-1]=fun(s,p,n-1,m-1,dp);
        if(dp[n-1][m-1]==1)return true;
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna