class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n= prices.size();
        int buy[n];
        int sell[n];
        memset(buy,0,sizeof(buy));
        memset(sell,0,sizeof(sell));
        buy[0]=-prices[0];
        for(int i=1;i<n;i++){                               // TC---> O(N) SC--> O(N)
            buy[i]= max(buy[i-1],sell[i-1]-prices[i]);
            sell[i] =max(sell[i-1],prices[i]+buy[i-1]-fee);
        }
        return max(buy[n-1],sell[n-1]);
    }
};