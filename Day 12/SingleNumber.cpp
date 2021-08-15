class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // unordered_map<int,int> mp;                       //Mapping TC -- O(N) SC -- O(N)
        // for(int i=0;i<nums.size();i++){
        //     mp[nums[i]]++;
        // }
        // for(auto x:mp){
        //     if(x.second==1)
        //         return x.first;
        // }
        // return -1;
        
        int res=0;                                         // XOR method more optimal
        for(int i:nums){         // TC-- O(N) SC-- O(1)
            res^=i;
        }
        return res;
    }
};