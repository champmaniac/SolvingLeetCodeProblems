class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> res;
        vector<int> ds;
        helper(0,target,candidates,res,ds);
        return res;
    }
    void helper(int index,int target, vector<int>& candidates,vector<vector<int>>& res,vector<int>& ds)
    {
        if(target==0)
        {
            res.push_back(ds);
            return;
        }
        for(int i=index;i<candidates.size();i++)
        {
            if(candidates[i]>target) break;
            if(i>index && candidates[i]==candidates[i-1]) continue;
            ds.push_back(candidates[i]);
            helper(i+1,target-candidates[i],candidates,res,ds);
            ds.pop_back();
        }
    }
};