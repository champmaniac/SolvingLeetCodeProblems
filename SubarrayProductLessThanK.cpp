class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i=0;
        int count=0;
        long prod =1;
        for(int j=0;j<nums.size();j++){
            prod*=nums[j];
        
        while(prod>=k && i<nums.size()){
            prod=prod/nums[i];
            i++;
        }
        if(prod<k)
            count+=j-i+1;
        }
        return count;
    }
};