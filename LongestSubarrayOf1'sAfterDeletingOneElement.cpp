class Solution {                                 //TC O(N) SC O(1)
public:
    int longestSubarray(vector<int>& nums) {
        
        int i=0,j,k=1;
        int n=nums.size();
        for(j=0;j<n;j++){
            if(nums[j]==0) k--;
            if(k<0 && nums[i++]==0) k++;
        }
        return j-i-1;
        
        
        // int i=0,j,res=0,k=1;
        // for(j=0;j<nums.size();j++){
        //     if(nums[j]==0)
        //         k--;
        //     while(k<0){
        //         if(nums[i]==0)
        //             k++;
        //         i++;
        //     }
        //     res=max(res,j-i);
        // }
        // return res;
    }
};