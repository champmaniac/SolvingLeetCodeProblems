class Solution {
public:
    int kthFactor(int n, int k) {
        int fact=0;
        for(int i=1;i<=n;i++){
            if(n%i==0)
                fact++;
            if(fact==k)
                return i;
        }
        return -1;
    }
};