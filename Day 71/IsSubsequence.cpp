class Solution { // Recursive Approach
public:
    // bool isSubsequence(string s, string t) {
    //     int m = s.size();
    //     int n = t.size();
    //     return isSub(s,t,m,n);
    // }
    // bool isSub(string str1,string str2, int m,int n){
    //     if(m==0) return true;
    //     if(n==0) return false;
    //     if(str1[m-1]==str2[n-1]){
    //         return isSub(str1,str2,m-1,n-1);
    //     }
    //     return isSub(str1,str2,m,n-1);
    // }
    
    // Two Pointer Approach
    
    bool isSubsequence(string s, string t){
        int m = s.size();
        int n = t.size();
        int i=0,j=0;
        while(i<m && j<n){
            if(s[i]==t[j])
                i++;
            j++;
        }
        return i==m? 1:0;
    }
    
    // DP Approach
//     int helper(string x,string y){
//         int m = x.size();
//         int n = y.size();
//         int dp[m+1][n+1];
//         for(int i=0;i<=m;i++){
//             dp[i][0]=0;
//         }
//         for(int j=0;j<=n;j++){
//             dp[0][j]=0;
//         }
//         for(int i=1;i<=m;i++){
//             for(int j=1;j<=n;j++){
//                 if(x[i-1]==y[j-1]){
//                     dp[i][j]=1+dp[i-1][j-1];
//                 }
//                 else
//                 {
//                     dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
//                 }
//             }
//         }
//         return dp[m][n];
//     }
    
//     bool isSubsequence(string s, string t){
//         int x = helper(s,t);
//         if(x==s.size())
//             return true;
//         return false;
//     }
};