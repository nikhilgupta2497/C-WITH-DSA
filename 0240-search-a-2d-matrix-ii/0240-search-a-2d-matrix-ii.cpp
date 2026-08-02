class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int row = 0;
        int column = n-1;
        while(column>=0 && row<m){
            int mid = matrix[row][column];
            if(mid==target){
                return true;
            }else if(mid>target){
                column--;
            }else{
                row++;
            }
        }
        return false;
    }
};