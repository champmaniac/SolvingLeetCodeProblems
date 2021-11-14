class Solution {
  public:
    string getSmallest(long long n) {
        // code here
        if(n==1) return "1";
        string ans="";
        for(long long i=9;i>=2;i--){
            while((n%i==0)&&n>=i){
                ans+=to_string(i);
                n=n/i;
            }
        }
        if(n>=10) 
            return "-1";
        if(n>1) 
            ans+=to_string(n);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};