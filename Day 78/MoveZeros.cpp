class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int n = nums.size();
        // int j=0;
        // for(int i=0;i<n;i++){
        //     if(nums[i]!=0)
        //         nums[j++]=nums[i];
        // }
        // for(j;j<n;j++)
        //     nums[j]=0;
        
        int last=0,cur=0;
        while(cur<nums.size()){
            if(nums[cur]!=0){
                swap(nums[last],nums[cur]);
                last++;
            }
            cur++;
        }
    }
};