class Solution {
    int x[4]={-1,0,1,0};
    int y[4]={0,1,0,-1};
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        if(m==0)
            return {};
        vector<vector<int>> dis(m,vector<int> (n,-1));
        queue<pair<int,int>> q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    q.push({i,j});
                    dis[i][j]=0;
                }
            }
        }
        while(!q.empty()){
            pair<int,int> pointer =q.front();
            q.pop();
            for(int dir=0;dir<4;dir++){
                int xd=pointer.first+x[dir];
                int yd=pointer.second+y[dir];
                if(xd>=0 && yd>=0 && xd<=m-1 && yd<=n-1 && mat[xd][yd]==1 && dis[xd][yd]==-1){
                    dis[xd][yd]=dis[pointer.first][pointer.second]+1;
                    q.push({xd,yd});
                }      
            }
        }
        return dis;
        
    }
};