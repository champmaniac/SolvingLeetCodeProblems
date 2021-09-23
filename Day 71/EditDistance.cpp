class Solution { // DP Memoization
public:
    int dp[1001][1001];
    int minDistance(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();
        for(int i=0;i<=m+1;i++)
        {
            for(int j=0;j<=n+1;j++)
            {
                dp[i][j] = -1;
            }
        }
        dp[m][n]= helper(word1,word2,m,n);
        return dp[m][n];
    }
    
    int helper(string &word1,string&word2, int m,int n){
        if(m==0)
            return n;
        if(n==0)
            return m;
        if(dp[m][n]!=-1){
            return dp[m][n];
        }
        if(word1[m-1]==word2[n-1]){ 
            dp[m][n]=helper(word1,word2,m-1,n-1);
            return dp[m][n];
        }
        dp[m][n]= 1+min(helper(word1,word2,m,n-1),min(helper(word1,word2,m-1,n),helper(word1,word2,m-1,n-1)));
        return dp[m][n];
    }
};