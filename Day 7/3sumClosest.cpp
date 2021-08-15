class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int result = nums[0]+nums[1]+nums[nums.size()-1];
        sort(nums.begin(),nums.end()); // O(nlogn)
        for(int i=0;i<nums.size()-2;i++){          // O(n2)
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int currSum = nums[i]+nums[j]+nums[k];
                if(currSum>target)
                {
                    k-=1;
                }
                else
                {
                    j+=1;
                }
                if(abs(currSum-target)<abs(result-target))
                    result = currSum;
            }
        }
        return result;
    }
};