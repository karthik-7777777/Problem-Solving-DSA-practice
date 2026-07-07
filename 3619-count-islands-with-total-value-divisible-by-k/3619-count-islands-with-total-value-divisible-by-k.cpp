class Solution {
public:
void bfs(vector<vector<int>>& grid, vector<vector<int>>& vis,long long& sum,int i,int j){
    if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || vis[i][j]==1 || grid[i][j]==0){
        // vis[i][j]=1;
        return;
    }
    vis[i][j]=1;
    sum+=grid[i][j];
    bfs(grid,vis,sum,i+1,j);
    bfs(grid,vis,sum,i-1,j);
    bfs(grid,vis,sum,i,j+1);
    bfs(grid,vis,sum,i,j-1);
}
    int countIslands(vector<vector<int>>& grid, int k) {
        int ans=0;
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]!=0 && vis[i][j]==0){
                    long long sum=0;
                    bfs(grid,vis,sum,i,j);
                    // cout <<grid[i][j] << " ";
                    cout << sum << " ";
                    if(sum%k==0)ans++;
                }
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna