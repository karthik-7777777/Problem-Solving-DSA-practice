class Solution {
public:
void dfs(int x,vector<vector<int>>isConnected,vector<int>&vis){
    vis[x]=1;
    for(int i=0;i<isConnected[x].size();i++){
        if(isConnected[x][i]==1 && vis[i]==0){
            dfs(i,isConnected,vis);
        }
    }
    return;
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int>vis(n,0);
        int ans=0;
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                dfs(i,isConnected,vis);
                ans++;
            }
        }
        return ans;
    }
};