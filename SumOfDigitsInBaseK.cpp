class Solution {
public:
    int sumBase(int n, int k) {    // TC--- O(log base k N) == O(log N) == O(1) SC -- O(1)
        int res=0;
        while(n>0){
            res+=(n%k);
            n/=k;
        }
        return res;
        
    }
};
