class Solution { // TC O(N)
public:
    int minStartValue(vector<int>& nums) {
        int ans=0,sum=0;
        for(auto ele:nums){
            sum+=ele;
            ans=min(ans,sum);
        }
        return -ans+1;
        
    }
};