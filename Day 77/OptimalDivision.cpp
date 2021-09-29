class Solution {
public:
    string optimalDivision(vector<int>& nums) {
        int n = nums.size();
        string exp;
        for(int i=0;i<n;++i){
            if(i>0)
                exp+="/";
            if(i==1 && n>2)
                exp+="(";
            exp+=to_string(nums[i]);
            if(i==n-1 && n>2)
                exp+=")";
        }
        return exp;
    }
};