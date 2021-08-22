class Solution {       //TC O(N)
public:
    int binaryGap(int n) {
        int res=0;
        for(int d=-32;n;n/=2,d++){
            if(n%2)res=max(res,d),d=0;
        }
        return res;
    }
};