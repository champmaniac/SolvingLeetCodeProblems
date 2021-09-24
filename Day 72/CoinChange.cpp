class Solution { 
public:
    // int change(int amount, vector<int>& coins) {
    //     vector<int> dp(amount+1); //TC: O(length of coins * amount)
    //     dp[0]=1;
    //     for(int i =0;i<coins.size();i++){
    //         for(int j=1;j<=amount;j++){
    //             if(j-coins[i]>=0)
    //                 dp[j]+=dp[j-coins[i]];
    //         }
    //     }
    //     return dp[amount];
    // }
    
    
//     int change(int amount,vector<int>& coins){ // Recursive TLE
//         int n =coins.size();
//         if(amount==0)
//             return 1;
//         if(n==0)
//             return 0;
//         return coinChange(coins,n,amount);
//     }
    
//     int coinChange(vector<int>& coins,int n ,int amount){
//         if(amount==0)
//             return 1;
//         if(n==0)
//             return 0;
//         if(coins[n-1]>amount)
//             return coinChange(coins,n-1,amount);
//         return coinChange(coins,n,amount-coins[n-1])+coinChange(coins,n-1,amount);
//     }
    
    vector<vector<int>> dp;
    int coinChange(vector<int>& coins,int n ,int amount){
        if(amount==0)
            return 1;
        if(n==0)
            return 0;
        if(dp[n][amount]!=-1){
            return dp[n][amount];
        }
        if(coins[n-1]>amount){
            dp[n][amount]=coinChange(coins,n-1,amount);
            return dp[n][amount];
        }
        dp[n][amount]= coinChange(coins,n,amount-coins[n-1])+coinChange(coins,n-1,amount);
        return dp[n][amount];
    }
    int change(int amount,vector<int>& coins){ // DP Memoization
        int n =coins.size();
        if(amount==0)
            return 1;
        if(n==0)
            return 0;
        dp.resize(n+2,vector<int>(amount+2,-1));
        dp[n][amount]= coinChange(coins,n,amount);
        return dp[n][amount];
    }
};