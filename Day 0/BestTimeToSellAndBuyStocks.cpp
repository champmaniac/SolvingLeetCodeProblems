class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int profit=0;
        // int n=prices.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(prices[j]>prices[i]){
        //             int Currpro =prices[j]-prices[i];  // TC----> O(n2) approach this will give TLE. 
        //             profit=max(profit,Currpro);        //so the optimized code in O(n) is given below !!
        //         }
        //     }
        // }
        // return profit;
        int profit=0;
        int min_price =INT_MAX;
        for(int i=0;i<prices.size();i++){           // TC----> O(n)
            min_price =min(min_price,prices[i]);
            profit=max(profit,prices[i]-min_price);
        }
        return profit;
    }
};