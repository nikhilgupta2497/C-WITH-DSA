class Solution {
public:
    bool issafe(int row, int column,vector<string> &board,int n){
        for(int j = 0;j<n;j++){
            if(board[row][j]=='Q'){
                return false;
            }
        }for(int i=0;i<n;i++){
            if(board[i][column]=='Q'){
                return false;
            }
        }for(int i=row,j=column;i>=0&&j>=0;i--,j--){
            if(board[i][j]=='Q'){
                return false;
            }
        }for(int i=row,j=column;i>=0&&j<n;i--,j++){
            if(board[i][j]=='Q'){
                return false;
            }
        }return true;
    }

    void nqueen(vector<vector<string>> &ans,int n,int row,vector<string> &board){
        if(row==n){
            ans.push_back({board});
            return;
        }
        for(int j=0;j<n;j++){
            if(issafe(row,j,board,n)){
                board[row][j] = 'Q';
                nqueen(ans,n,row+1,board);
                board[row][j] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {\
        vector<string> board(n,string(n,'.'));
        vector<vector<string>> ans;
        
        nqueen(ans,n,0,board);
        return ans;

        
    }
};