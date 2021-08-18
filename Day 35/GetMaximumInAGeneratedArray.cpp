class Solution {
public:
    int getMaximumGenerated(int n) {
        // if(n==0 || n==1) return n; // Base case
        // vector<int> nums(n+1);
        // nums[0]=0;
        // nums[1]=1;
        // int maxi=1;
        // for(int i=2;i<=n;i++){
        //     nums[i]=i%2==0?nums[i/2]:nums[i/2]+nums[i/2+1];
        //     maxi=max(maxi,nums[i]);
        // }
        // return maxi;
        
        
        
        //DP 
        
        if(n==0 || n==1) return n;
        vector<int> dp(n+1);
        dp[0]=0;
        dp[1]=1;
        int maxi=1;
        for(int i=1;i<=n/2;i++){
            if(i*2>n || (2*i+1)>n)
                break;
            dp[i*2]=dp[i];
            dp[i*2+1]=dp[i]+dp[i+1];
            
            maxi=max(maxi,dp[i*2+1]);
        }
        return maxi;
        
        
    }
};