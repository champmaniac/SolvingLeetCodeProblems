class Solution {
public:
    int countTriplets(vector<int>& arr) {           // TC -- O(N) SC -- O(1)
        unordered_map<int,vector<int>> mp;
        int x=0,ans=0;     // x is the cumulative XOR
        mp[0].push_back(-1); // pushing -1 at the 0th index of map
        for(int i=0;i<arr.size();i++){
            x^=arr[i];                  // maintaining the cumulative XOR          
            if(mp.find(x)!=mp.end()){
                for(auto a:mp[x])
                    ans+=(i-a)-1;
            }
            mp[x].push_back(i);
                
        }
        return ans;
        
    }
};