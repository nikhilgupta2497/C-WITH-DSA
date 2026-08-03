class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int str = 0,endr = m-1,stc = 0, endc = n-1;
        vector<int> ans;
        while(str<=endr && stc<=endc){
            for(int j = stc;j<=endc;j++){
                ans.push_back(matrix[str][j]);
            }for(int i = str+1;i<=endr;i++){
                ans.push_back(matrix[i][endc]);
            }for(int j = endc-1;j>=stc;j--){
                if(str==endr){
                    break;
                }
                ans.push_back(matrix[endr][j]);
            }for(int i = endr-1;i>=str+1;i--){
                if(stc==endc){
                    break;
                }
                ans.push_back(matrix[i][stc]);
            }
            str++,endr--,stc++,endc--;
        }
        return ans;
    }
};