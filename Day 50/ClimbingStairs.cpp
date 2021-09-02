class Solution { // using DP
public:
    int dp[46];
    int help(int s,int n){
        if(s==n)
            return 1;
        if(s>n)
            return 0;
        if(dp[s]!=-1)
            return dp[s];
        int ans= help(s+1,n)+help(s+2,n);
        return dp[s]=ans;
    }
    int climbStairs(int n) {
        for(int i=0;i<46;i++)
            dp[i]=-1;
        return help(0,n);
    }
};