class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int one=INT_MAX, two=INT_MAX;
        for(int x:nums){
            if(x<=one)
                one=x;
            else if(x<=two)
                two=x;
            else{
                return true;
            }
        }
        return false;
    }
};