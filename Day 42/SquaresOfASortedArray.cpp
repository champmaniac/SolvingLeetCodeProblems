class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size(),l=0,r=n-1;
        vector<int> v(n);
        for(int k=n-1;k>=0;k--){
            if(abs(nums[r])>abs(nums[l]))
                v[k]=nums[r]*nums[r--];
            else
                v[k]=nums[l]*nums[l++];
        }
        return v;
    }
};