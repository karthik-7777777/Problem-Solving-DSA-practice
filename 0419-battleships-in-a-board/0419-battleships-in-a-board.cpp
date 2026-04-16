class Solution {
public:
void dfs(int row,int col,int n,int m,vector<vector<int>>&vis,vector<vector<char>>board,int &ans){
    if(row<0 || row>=n || col<0 || col >=m)return;
    if(vis[row][col] || board[row][col]=='.')return;
    vis[row][col]=1;
    dfs(row,col-1,n,m,vis,board,ans);
    dfs(row,col+1,n,m,vis,board,ans);
    dfs(row-1,col,n,m,vis,board,ans);
    dfs(row+1,col,n,m,vis,board,ans);
}
    int countBattleships(vector<vector<char>>& board) {
        int n=board.size(),m=board[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]!=1){
                    if(board[i][j]=='.')vis[i][j]=1;
                    else if(board[i][j]=='X'){
                        ans++;
                        dfs(i,j,n,m,vis,board,ans);
                    }
                }
            }
        }
        return ans;
    }
};