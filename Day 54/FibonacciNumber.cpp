class Solution {
public:
    int fib(int n) {
        // if(n==0) 
        //     return 0;
        // if(n==1) 
        //     return 1;
        // return fib(n-1)+fib(n-2); // ITERATIVE APPROACH
        
        if(n<2)
            return n;
        int dp[n+1]; // one extra than size of n
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};