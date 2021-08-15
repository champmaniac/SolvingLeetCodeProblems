class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {            // TC --> O(N) SC --> O(N+N) = O(2N) = O(N)
        int lmax[n];
        int rmin[n];
        
        
        int maximum= INT_MIN;
        for(int i=0;i<n;i++){
            maximum=max(maximum,nums[i]);
            lmax[i]= maximum; 
        }
        int minimum= INT_MAX;
        for(int i=n-1;i>=0;i--){
            minimum=min(minimum,nums[i]);
            rmin[i]= minimum;
        }
        for(int i=1;i<n;i++){
            if(lmax[i-1]<=rmin[i])
                return i;
        }
        return n;
    }
};