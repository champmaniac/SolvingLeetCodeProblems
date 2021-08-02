class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums, vector<bool> a={}, int num=0 ) {
        for(auto i:nums){
            num=(num*2+i)%5;
            a.push_back(!num);
        }
        return a;
        
    }
};