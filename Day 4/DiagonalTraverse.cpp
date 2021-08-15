class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m=mat.size(), n=mat[0].size();
        int i=0,j=0;
        bool movingupright =true;
        int count=1;
        vector<int> result(m*n);
        result[0] = mat[i][j];
        while(i!=m-1|| j!=n-1){
            if(movingupright){
                if(j==n-1){
                    i++;
                    movingupright=false;
                }
                else if(i==0)
                {
                    j++;
                    movingupright=false;
                }
                else
                {
                    i--;
                    j++;
                }
            }
            else{
                if(i==m-1){
                    j++;
                    movingupright=true;
                }
                else if(j==0)
                {
                    i++;
                    movingupright=true;
                }
                else
                {
                    i++;
                    j--;
                }
            }
            result[count++] = mat[i][j];
        }
        return result;
    }
};