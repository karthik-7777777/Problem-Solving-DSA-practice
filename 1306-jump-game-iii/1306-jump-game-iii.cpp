class Solution {
public:
void rec(vector<int>& arr,int idx,int n,vector<int>& dp,bool &ans){
    if(idx<0 || idx>=n || dp[idx]==1 || ans)return;
    if(arr[idx]==0){
        ans=true;
        return;
    }
    dp[idx]=1;
    rec(arr,idx+arr[idx],n,dp,ans);
    rec(arr,idx-arr[idx],n,dp,ans);
}
    bool canReach(vector<int>& arr, int start) {
        bool ans=false;
        int n=arr.size();
        vector<int>dp(n,0);
        rec(arr,start,n,dp,ans);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna