class Solution {
public:
    int matrixScore(vector<vector<int>>& A) {
        int m=A.size(),n=A[0].size(),res=(1<<(n-1))*m;        //TC  O(MN)
        for(int j=1;j<n;j++){                                 //SC  O(1)
            int cur=0;
            for(int i=0;i<m;i++)
                cur+=A[i][j]==A[i][0];
            res+=max(cur,m-cur)*(1<<n-j-1);
        }
        return res;
    }
};