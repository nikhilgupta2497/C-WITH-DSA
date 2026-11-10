class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start = 0;
        int currgas = 0;
        int totalgas = accumulate(gas.begin(),gas.end(),0);
        int totalcost = accumulate(cost.begin(),cost.end(),0);
        if(totalgas<totalcost){
            return -1;
        }else{
            for(int i=0;i<gas.size();i++){
                currgas+=gas[i]-cost[i];
                if(currgas<0){
                    start = i+1;
                    currgas = 0;
                }
            }
        }return start;
        
    }
};