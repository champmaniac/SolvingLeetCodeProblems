class Solution {
public:
    int integerBreak(int n) {
        if(n<=2)
            return 1;
        vector<int> dp(n+1,0);
        dp[0]=0;
        dp[1]=1;
        for(int i=3;i<=n;i++){
            for(int j=1;j<i/2;j++){
                dp[i]= max(dp[i],max(j*(i-j),j*dp[i-j]));
            }
        }
        return dp[n];
        
    }
};