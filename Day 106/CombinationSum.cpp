class Solution {
public:
    vector<vector<int>> res;
    vector<int> curr;
    int sum;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sum=0;
        helper(candidates,target,0);
        return res;
    }
    void helper(vector<int> &candidates, int target,int index){
        if(sum>target)
            return;
        if(sum==target)
            res.push_back(curr);
        for(int i=index;i<candidates.size();i++)
        {
            sum+=candidates[i];
            curr.push_back(candidates[i]);
            helper(candidates,target,i);
            sum-=candidates[i];
            curr.pop_back();
        }
    }
};