class Solution {
public:
int stair(vector<int>& dp,vector<int>& cost,int idx){
    if(idx==0 || idx==1)return cost[idx];
    if(dp[idx]!=-1)return dp[idx];
    return dp[idx]=cost[idx]+min(stair(dp,cost,idx-1),stair(dp,cost,idx-2));
}
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n,-1);
        int ans=min(stair(dp,cost,n-1),stair(dp,cost,n-2));
        return ans;
    }
};