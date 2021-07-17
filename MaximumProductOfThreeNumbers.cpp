class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        // int n=nums.size();
        // int max_prod =INT_MIN;
        // for(int i=0;i<n-2;i++){
        //     for(int j=i+1;j<n-1;j++){
        //         for(int k=j+1;k<n;k++){
        //             int triplet_prod = nums[i]*nums[j]*nums[k];  // BRUTE FORCE TC --- > O(n3) TLE EXPECTED
        //             max_prod=max(max_prod,triplet_prod);
        //         }
        //     }
        // }
        // return max_prod;
        
        
        // int n=nums.size();
        // int max_prod =INT_MIN;
        // sort(nums.begin(),nums.end());
        // max_prod = max(max_prod,nums[0]*nums[1]*nums[n-1]);           // Better TC --> O(nlogn)
        // max_prod = max(max_prod,nums[n-1]*nums[n-2]*nums[n-3]);
        // return max_prod;
        
        int n=nums.size();
        int min1 = INT_MAX;
        int min2 = INT_MAX;                                             // Optimal TC --> O(n)
        int max1 = INT_MIN;
        int max2 = INT_MIN;
        int max3 = INT_MIN;
        for (int i=0;i<n;i++) {
        if (nums[i] <= min1) {
            min2 = min1;
            min1 = nums[i];
        } else if (nums[i] <= min2) {     // n lies between min1 and min2
            min2 = nums[i];
        }
        if (nums[i] >= max1) {            // n is greater than max1, max2 and max3
            max3 = max2;
            max2 = max1;
            max1 = nums[i];
        } else if (nums[i] >= max2) {     // n lies betweeen max1 and max2
            max3 = max2;
            max2 = nums[i];
        } else if (nums[i] >= max3) {     // n lies betwen max2 and max3
            max3 = nums[i];
        }
    }
    return max(min1 * min2 * max1, max1 * max2 * max3);
        
    }
};