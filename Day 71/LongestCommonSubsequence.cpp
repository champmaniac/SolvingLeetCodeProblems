class Solution { // O(m*n)
public:
    int longestCommonSubsequence(string &text1, string &text2) {
        int m = text1.size(), n = text2.size();
        vector<vector<short>> dp(text1.size()+1,vector<short> (text2.size()+1));
        for(auto i=1;i<=m;++i){
            for(auto j=1;j<=n;++j){
                if(text1[i-1]==text2[j-1])
                    dp[i][j]= dp[i-1][j-1]+1;
                else
                    dp[i][j]= max(dp[i][j-1],dp[i-1][j]);
            }
        }
        return dp[m][n];
    }
};