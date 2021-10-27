class Solution {
public:
    void solve(int col,vector<string>& board, vector<vector<string>>&ans,vector<int>& leftRow,vector<int>& upperDiagonal,vector<int>& lowerDiagonal,int n)
    {
        if(col==n){
            ans.push_back(board);
            return ;
        }
        for(int row=0;row<n;row++)
        {
            if(leftRow[row]==0 && lowerDiagonal[row+col]==0 && upperDiagonal[n-1+col-row]==0)
            {
                board[row][col]='Q';
                leftRow[row]=1;
                lowerDiagonal[row+col]=1;
                upperDiagonal[n-1+col-row]=1;
                solve(col+1,board,ans,leftRow,upperDiagonal,lowerDiagonal,n);
                board[row][col]='.';
                leftRow[row]=0;
                lowerDiagonal[row+col]=0;
                upperDiagonal[n-1+col-row]=0;
            }
        }
    }
    
    int totalNQueens(int n) {
        vector<vector<string>> ans;
        if(n<=0)
            return ans.size();
        vector<string> board(n,string(n,'.'));
        vector<int> leftRow(n,0),upperDiagonal(2*n-1,0), lowerDiagonal(2*n-1,0);
        solve(0,board,ans,leftRow,upperDiagonal,lowerDiagonal,n);
        return ans.size();
    }
};