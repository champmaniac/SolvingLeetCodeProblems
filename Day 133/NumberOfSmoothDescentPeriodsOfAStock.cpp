class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        
        long long n = prices.size(); // TC O(N) SC O(1) 
        int dp=1;
        long long ans=1;
        for(int i=1;i<n;i++){
            if(prices[i]==prices[i-1]-1)
                dp++;
            else
                dp=1;
            ans+=dp;
        }
        return ans;
        // long long n = prices.size(); // TC O(N) SC O(N) 
        // int *dp = new int[n];
        // dp[0]=1;
        // long long ans=1;
        // for(int i=1;i<n;i++){
        //     if(prices[i]==prices[i-1]-1)
        //         dp[i]=dp[i-1]+1;
        //     else
        //         dp[i]=1;
        //     ans+=dp[i];
        // }
        // return ans;
    }
};