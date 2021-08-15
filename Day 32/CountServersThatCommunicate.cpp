class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        vector<int> rows(grid.size(),0), columns(grid[0].size(),0); //Stores count of servers in rows and colums
        for(int i=0;i<grid.size();i++){                             // Fill the count vectors
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j])
                    rows[i]++,columns[j]++;
            }
        }
        int res=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j] && (columns[j]>1 || rows[i]>1))
                    res++;
            }
        }
        return res;
        
    }
};