class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res={{}};
        int startIndex=0,n=0;
        for(int i=0;i<nums.size();i++)
        {
            startIndex=i>=1 &&nums[i]==nums[i-1]?n:0;
            n=res.size();
            for(int j=startIndex;j<n;j++){
                vector<int> temp=res[j];
                temp.push_back(nums[i]);
                res.push_back(temp);
            }
        }
        return res;
    }
};