class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int total=0,index=0,tank=0;
        for(int i=0;i<n;i++){
            int consume = gas[i]-cost[i];
            tank+=consume;
            if(tank<0){
                index+=1;
                tank=0;
            }
            total+=consume;
        }
        return total<0?-1:index;
        
    }
};