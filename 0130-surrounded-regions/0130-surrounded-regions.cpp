class Solution {
public:
void bfs(int r,int c,vector<vector<char>>& board,vector<vector<int>>& vis){
    vis[r][c]=1;
    int m=board.size();
    int n= board[0].size();
    queue<pair<int,int>>q;
    q.push({r,c});
    while(!q.empty()){
        int row=q.front().first;
        int col=q.front().second;
        q.pop();
        if(row-1>=0 && row-1<m && col>=0 && col<n && !vis[row-1][col] && board[row-1][col]=='O'){
            vis[row-1][col]=1;
            q.push({row-1,col});
        }
        if(row+1>=0 && row+1<m && col>=0 && col<n && !vis[row+1][col] && board[row+1][col]=='O'){
            vis[row+1][col]=1;
            q.push({row+1,col});
        }
        if(row>=0 && row<m && col-1>=0 && col-1<n && !vis[row][col-1] && board[row][col-1]=='O'){
            vis[row][col-1]=1;
            q.push({row,col-1});
        }
        if(row>=0 && row<m && col+1>=0 && col+1<n && !vis[row][col+1] && board[row][col+1]=='O'){
            vis[row][col+1]=1;
            q.push({row,col+1});
        }
    }
}
    void solve(vector<vector<char>>& board) {
        int m=board.size();
        int n= board[0].size();
        vector<vector<int>>vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if((i==0 || j==0 || i==m-1 || j==n-1) && !vis[i][j] && board[i][j]=='O'){
                    bfs(i,j,board,vis);
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='O' && !vis[i][j]){
                    board[i][j]='X';
                }
            }
        }
    }
};