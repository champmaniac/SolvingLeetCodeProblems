class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& arr) {
        int n = arr.size();
        int m = arr[0].size();
        
        int dp[n][m];
        for(int i=0;i<m;i++)
            dp[n-1][i] = arr[n-1][i];
        
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<m;j++){
                dp[i][j]=arr[i][j];
                int mn = dp[i+1][j];
                
                if(j+1<m) // down right
                    mn= min(dp[i+1][j+1],mn);
                if(j-1>=0) // down left
                    mn = min(dp[i+1][j-1],mn);
                
                dp[i][j]+=mn;
            }
        }
        
        int res=INT_MAX;
        for(int i=0;i<m;i++){
            res = min(dp[0][i],res);
        }
        return res;
    }
};