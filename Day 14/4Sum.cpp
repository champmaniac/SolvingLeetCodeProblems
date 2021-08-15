class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;             // Optimal TC -- O(n3) SC -- O(1)
        if(nums.empty())
            return res;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int remaining = target-nums[i] - nums[j];
                int l=j+1;
                int r=n-1;
                while(l<r){
                    int two_sum=nums[l]+nums[r];
                    if(two_sum<remaining) l++;
                    else if(two_sum>remaining) r--;
                    else
                    {
                        vector<int> quadruplets(4,0);
                        quadruplets[0]=nums[i];
                        quadruplets[1]=nums[j];
                        quadruplets[2]=nums[l];
                        quadruplets[3]=nums[r];
                        res.push_back(quadruplets);
                        
                        // Processing the duplicates of number 3
                        while (front < back && num[front] == quadruplet[2]) ++front;
                    
                        // Processing the duplicates of number 4
                        while (front < back && num[back] == quadruplet[3]) --back;
                        
                    }
                }
                // Processing the duplicates of number 2
                while(j+1<n && nums[j+1]==nums[j]) ++j;
            }
            // Processing the duplicates of number 1
            while(i+1<n && nums[i+1]==nums[i]) ++i;
        }
        return res;
        
    }
};