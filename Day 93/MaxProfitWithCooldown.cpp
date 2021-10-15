class Solution {
public:
    int maxProfit(vector<int>& prices, int cooldown =1) {
        int n=prices.size();
        int buy[n];
        int sell[n];
        memset(buy,0,sizeof(buy));
        memset(sell,0,sizeof(sell));
        buy[0]=-prices[0];
        for(int i=1;i<n;i++){
            buy[i] = max(buy[i-1], (i-cooldown-1>=0? sell[i-cooldown-1]:0)-prices[i]);
            sell[i] = max(sell[i-1],buy[i-1]+prices[i]);
        }
        return max(buy[n-1],sell[n-1]);
    }
};