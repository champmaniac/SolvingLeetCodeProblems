class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // for(auto c:nums){ // tc O(n^2) sc O(1) 
        //     int occurence =0;
        //     for(auto c2: nums){
        //         occurence+=c==c2;
        //     }
        //     if(occurence==1) return c;
        // }
        // return -1;
        
        
        // unordered_map<int,int> mp; // tc O(n) sc(n)
        // for(auto c: nums) mp[c]++;
        // for(auto [c,freq]:mp){
        //     if(freq==1) return c;
        // }
        // return -1;
        
        int n =nums.size(), L=0, R=n-1,mid; // tc O(log n) sc O(1)
        while(L<=R){
            mid = (L+R) >>1;
            bool isHalfEven = (mid-L)%2==0;
            if(mid+1<n && nums[mid]==nums[mid+1]){
                if(isHalfEven) L=mid+2;
                else R= mid-1;
            }
            else if(mid && nums[mid]==nums[mid-1]){
                if(isHalfEven) R=mid-2;
                else L= mid+1;
            }
            else return nums[mid];
        }
        return -1;
    }
};