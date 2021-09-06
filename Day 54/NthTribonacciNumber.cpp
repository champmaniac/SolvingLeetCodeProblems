class Solution { // complete brute force
public:
    int tribonacci(int n) {
        // if(n<2)
        //     return n;
        // int a=0,b=1,c=1,d=a+b+c;
        // while(n-- > 2){
        //     d=a+b+c, a=b,b=c,c=d;
        // }
        // return c;
        
        int dp[3]={0,1,1};
        for(int i=3;i<=n;i++){
            dp[i%3]+=dp[(i+1)%3]+dp[(i+2)%3];
        }
        return dp[n%3];
    }
};