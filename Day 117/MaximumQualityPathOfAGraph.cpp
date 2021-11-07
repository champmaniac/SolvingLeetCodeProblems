class Solution {
private:
    int maxVal;
private:
    void f(int node,int maxT, int val, vector<int>& vis,vector<pair<int,int>> adj[], vector<int>& values)
    {
        if(maxT<0) return;
        vis[node]++;
        if(vis[node]==1) val+=values[node];
        if(node ==0) maxVal=max(maxVal,val);
        
        for(auto it:adj[node]){
            int child = it.first;
            int tm = it.second;
            f(child,maxT-tm,val,vis,adj,values);
            
        }
        vis[node]--;
    }
public:
    int maximalPathQuality(vector<int>& values, vector<vector<int>>& edges, int maxTime) {
        int n = values.size();
        vector<pair<int,int>> adj[n];
        for(auto it:edges)
        {
            int u =it[0];
            int v =it[1];
            int tm = it[2];
            adj[u].push_back({v,tm});
            adj[v].push_back({u,tm});
        }
        vector<int> vis(n,0);
        f(0,maxTime,0,vis,adj,values);
        return maxVal;
    }
};