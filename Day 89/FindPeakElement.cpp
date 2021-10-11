class Solution { // TC O(log n)
public:
    int findPeakElement(const vector<int>& nums) {
        int n = nums.size();
        int lo=0,hi=n-1;
        while(lo<hi){
            int mid =(lo+hi)/2;
            if(nums[mid]<nums[mid +1])
                lo=mid+1;
            else
                hi=mid;
        }
        return lo;
    }
    
};