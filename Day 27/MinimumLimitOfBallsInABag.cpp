class Solution {      // TC O(nlongINT_MAX)  SC O(1)
public:
    // bool check(int mid, vector<int>& nums, int maxOperations){
    //     for(int i=0;i<nums.size();i++){
    //         maxOperations-=(nums[i]/mid);
    //         if(nums[i]%mid==0) maxOperations++;
    //     }
    //     return maxOperations>=0;
    // }
    // int minimumSize(vector<int>& nums, int maxOperations) {
    //     int s=1,e=INT_MAX;
    //     int res=0;
    //     while(s<=e){
    //         int mid=s+(e-s)/2;
    //         if(check(mid,nums,maxOperations))
    //         {
    //             res=mid;
    //             e=mid-1;
    //         }
    //         else
    //         {
    //             s=mid+1;
    //         }
    //     }
    //     return res;
    // }
    
    
    int minimumSize(vector<int>& nums, int k) {
        int l=1,r=1e9;
        while(l<r){
            int mid=(l+r)/2,count=0;
            for(int a: nums)
                count+=(a-1)/mid;
            if(count>k)
                l=mid+1;
            else
                r=mid;
        }
        return l;
    }
};