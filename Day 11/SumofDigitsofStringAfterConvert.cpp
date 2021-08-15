class Solution {
public:
    int getLucky(string s, int k) {
        int sum=0,sum1=0;
        for(auto ch: s){
            int n=ch-'a'+1;
            sum+=n/10+n%10;
        }
        while(--k>0 && sum>9){
            for(;sum;sum/=10){
                sum1+=sum%10;
            }
            swap(sum,sum1);
        }
        return sum;
    }
    
};