class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;++i){
            while(nums[i]>0 && nums[i]<=n && nums[nums[i]-1]!=nums[i])
                swap(nums[i],nums[nums[i]-1]);                      
        }
        for(int index=0;index<n;++index){
            if(nums[index]!=index+1)
                return index+1;
        }
        return n+1;
    }
};