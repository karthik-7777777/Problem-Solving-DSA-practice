class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        vector<pair<int,int>>rot;
        int n=grid.size(),m=grid[0].size();
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2)q.push({i,j});
            }
        }
        vector<vector<int>>vis(n,vector<int>(m,0));
        int ans=0;
        while(!q.empty()){
            int size=q.size();
            while(size--){
                auto k=q.front();
                q.pop();
                int x=k.first,y=k.second;
                vis[x][y]=1;
                if(x-1>=0 && x-1<n && y>=0 && y<m){
                    if(vis[x-1][y]==0 && grid[x-1][y]==1){
                        q.push({x-1,y});
                        vis[x-1][y]=1;
                    }
                }
                if(x+1>=0 && x+1<n && y>=0 && y<m){
                    if(vis[x+1][y]==0 && grid[x+1][y]==1){
                        q.push({x+1,y});
                        vis[x+1][y]=1;
                    }
                }
                if(x>=0 && x<n && y-1>=0 && y-1<m){
                    if(vis[x][y-1]==0 && grid[x][y-1]==1){
                        q.push({x,y-1});
                        vis[x][y-1]=1;
                    }
                }
                if(x>=0 && x<n && y+1>=0 && y+1<m){
                    if(vis[x][y+1]==0 && grid[x][y+1]==1){
                        q.push({x,y+1});
                        vis[x][y+1]=1;
                    }
                }
            }
            if(q.size())ans++;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==0 && grid[i][j]==1)return -1;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna