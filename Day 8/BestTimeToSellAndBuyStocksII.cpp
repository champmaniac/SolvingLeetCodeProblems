class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int res=0;
        // for(int i=1;i<prices.size();i++){
        //     res+=max(prices[i]-prices[i-1],0);      // TC---> O(n) SC--> O(1)
        // }
        // return res;
        
        int n= prices.size();
        int buy[n];
        int sell[n];
        memset(buy,0,sizeof(buy));
        memset(sell,0,sizeof(sell));
        buy[0]=-prices[0];
        for(int i=1;i<n;i++){                               // TC---> O(n) SC--> O(n)
            buy[i]= max(buy[i-1],sell[i-1]-prices[i]);
            sell[i] =max(sell[i-1],prices[i]+buy[i-1]);
        }
        return max(buy[n-1],sell[n-1]);
            
    }
};