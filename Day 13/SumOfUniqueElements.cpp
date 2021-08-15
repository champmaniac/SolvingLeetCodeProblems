class Solution {
public:
    int sumOfUnique(vector<int>& nums) {          // TC --> O(N) SC-- O(1)
        unordered_map<int,int> mp;
        int n=nums.size();
        int res=0;
        for(auto n:nums){
            int cnt= ++mp[n];
            res+=cnt==1?n:cnt==2?-n:0;
        }
        return res;
    }
};