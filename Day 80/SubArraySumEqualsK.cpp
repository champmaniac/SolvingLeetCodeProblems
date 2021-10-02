class Solution {
public:
    int subarraySum(vector<int>& nums, int k) { // TLE O(n^3)
        // int count =0;
        // int n = nums.size();
        // for(int x=0;x<n;x++){
        //     for(int y=x;y<n;y++){
        //         int sum=0;
        //         for(int z=x; z<=y;z++)
        //             sum+=nums[z];
        //         if(sum==k)
        //             count++;
        //     }
        // }
        // return count;
        
        
        int n = nums.size();           // Map approach giving O(n)
        map<int,int> mp; // prefix sum recorder
        int cum =0; // cumaltive sum
        int count=0;
        mp[0]++;
        for(int i=0;i<n;i++){
            cum+=nums[i];
            if(mp.find(cum-k)!=mp.end())
                count+=mp[cum-k];
            mp[cum]++;
        }
        return count;
    }
};