class Solution {
public:
    bool issafe(int n,int row,int column, vector<string> &board){
        for(int i = 0;i<row;i++){
            if(board[i][column]=='Q'){
                return false;
            }
        }
        // for(int j = 0;j<n;j++){
        //     if(board[row][j]=='Q'){
        //         return false;
        //     }}
            for(int i=row-1,j=column-1;i>=0&&j>=0;i--,j-- ){
            if(board[i][j]=='Q'){
                return false;
            }
        }for(int i=row-1,j=column+1;i>=0&&j<n;i--,j++ ){
            if(board[i][j]=='Q'){
                return false;
            }
        }return true;
    }

    void nqueen(int n,int &ans,vector<string> &board,int row){
        if(row==n){
            ans++;
            return;
        }
        for(int j = 0;j<n;j++){
            if(issafe(n,row,j,board)){
                board[row][j] = 'Q';
                nqueen(n,ans,board,row+1);
                board[row][j] = '.';
            }
        }
    }
    int totalNQueens(int n) {
        int ans = 0;
        vector<string> board(n,string(n,'.'));
        nqueen(n,ans,board,0);
        return ans;


    }
};