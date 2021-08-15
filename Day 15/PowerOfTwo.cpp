class Solution {
public:
    bool isPowerOfTwo(int n) {
        // base case
        if(n<=0)
            return false;
        // main case using (n&n-1) trick
        if((n&n-1)==0)
            return true;
        return false;
        
    }
};