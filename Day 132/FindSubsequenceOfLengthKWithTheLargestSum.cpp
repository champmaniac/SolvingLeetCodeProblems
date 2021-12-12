class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int> subSeq,temp=nums;
        unordered_map<int,int> mp;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<k;i++){
            mp[nums[n-1-i]]++;
        }
        for(auto it:temp){
            if(mp[it]-- >0)
                subSeq.push_back(it);
        }
        return subSeq;
    }
};