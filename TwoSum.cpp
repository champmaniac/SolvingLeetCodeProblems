class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    res.push_back(i);
                    res.push_back(j);                   //TC --> O(n2) approach & SC --> O(1)
                }
            }
        }
        return res;

 -------------------------------------------------------------------------------------------
        
        unordered_map<int, int> m;
        for(int i = 0; i < nums.size(); i++)
        {
            if(m.find(target-nums[i]) != m.end())         // TC --> O(n) approach & SC --> O(n)
            return {m[target-nums[i]], i};
            m[nums[i]] = i;
        }
        return {};
    }
};