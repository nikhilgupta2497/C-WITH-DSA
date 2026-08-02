class Solution {
public:

    bool searchinrow(int target,int row,vector<vector<int>>& matrix){
        int n = matrix[0].size();
        int st = 0, end = n-1;
        while (st<=end){
            int mid = st+(end-st)/2;
            if(matrix[row][mid]==target){
                return true;
            }else if(matrix[row][mid]>target){
                end = mid-1;
            }else{
                st = mid+1;
            }
        }return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int str = 0;
        int endr = m-1;
        while(str<=endr){
            int midrow = str+(endr-str)/2;
            if(matrix[midrow][0]<=target && matrix[midrow][n-1]>=target){
                return searchinrow(target,midrow,matrix);
                
            }else if(matrix[midrow][n-1]<target){
                str = midrow+1;

            }else{
                endr = midrow-1;

            }
        } return false;
    }
};