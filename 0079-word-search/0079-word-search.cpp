class Solution {
public:
void trav(vector<vector<char>>& board,string &word,string str,int idx,int row,int col,bool &chk){
    if(str==word && str.size()==word.size()){
        chk=true;
        return;
    }
    if(row<0 || row>=board.size()|| col<0 || col>=board[0].size()){
        return;
    }
    if(board[row][col]==word[idx]){
        char ch=board[row][col];
        board[row][col]='.';
        trav(board,word,str+ch,idx+1,row,col+1,chk);
        trav(board,word,str+ch,idx+1,row,col-1,chk);
        trav(board,word,str+ch,idx+1,row+1,col,chk);
        trav(board,word,str+ch,idx+1,row-1,col,chk);
        board[row][col]=ch;
    }
}
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size(),n=board[0].size();
        int idx=0; 
        bool chk=false;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[idx]){
                    char ch=board[i][j];
                    board[i][j]='.';
                    string str="";
                    trav(board,word,str+ch,idx+1,i,j+1,chk);
                    trav(board,word,str+ch,idx+1,i,j-1,chk);
                    trav(board,word,str+ch,idx+1,i+1,j,chk);
                    trav(board,word,str+ch,idx+1,i-1,j,chk);
                    board[i][j]=ch;
                }
            }
        }
        return chk;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna