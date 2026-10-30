class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> ans;
        int n = height.size();
        if (n == 0) return 0;
        vector<int> leftmax(n);
        leftmax[0]=height[0];
        for(int i=1;i<n;i++){
            leftmax[i] = max(leftmax[i-1],height[i]);
        }
        vector<int> rightmax(n);
        rightmax[n-1]=height[n-1];
        for(int i= n-2;i>=0;i--){
            rightmax[i] = max(rightmax[i+1],height[i]);
        }
        int water = 0;
        for(int i = 0;i<n;i++){
            int lmax = leftmax[i];
            int rmax = rightmax[i];
            water += min(lmax,rmax)-height[i];
            
        }
        return water;

    }
};