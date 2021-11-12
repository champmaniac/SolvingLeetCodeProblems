class Solution {
public:
    int subarraySum(vector<int>& nums, int k) { // TLE 
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
        
        int n = nums.size();
        int count=0;
        int cum=0;
        map<int,int> mp;
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