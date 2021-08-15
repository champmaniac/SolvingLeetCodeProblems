class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int sum=0;
        int n=piles.size();
        int i= n-2;
        int j=0;
        while(j++<n/3){
            sum+=piles[i];
            i-=2;                // MORE EASIER TO UNDERSTAND 
        }                        // SAME TC --> O(NlogN) for both the solutions
        return sum;
        // int sum=0,n=piles.size();
        // for(int i=n/3;i<n;i+=2){
        //     sum+=piles[i];
        // }
        // return sum;
    }
};