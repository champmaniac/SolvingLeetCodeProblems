class Solution {  //Find the longest subarray with at most K zeros. TC O(N) SC O(1)
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int i=0,j;
        int n=nums.size();
        for(j=0;j<n;j++){
            if(nums[j]==0) k--;
            if(k<0 && nums[i++]==0) k++;
        }
        return j-i;
        
        
        // int i=0,j=0;
        // int n=nums.size();
        // while(i<n){
        //     if(nums[i]==0) k--;
        //     if(k<0){
        //         if(nums[j]==0){
        //             k++;
        //         }
        //         j++;
        //     }
        //     i++;
        // }
        // return i-j;
    }
};