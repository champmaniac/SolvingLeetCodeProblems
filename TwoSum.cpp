class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j]==target){
        //             return{i,j};
        //          }                      //TC --> O(n2) approach & SC --> O(1)
        //     }
        // }
        // return {-1,-1}; // this condition will never come!! Just made for leetcode issues!
        
        
      //.............................................................................................  
        
        
        unordered_map<int, int> m;
        for(int i=0; i < nums.size(); i++){
            int x = nums[i];
            int y=target-x;
            if(m.find(y) != m.end())          // TC --> O(n) approach & SC --> O(n)
            return {m[y], i};
            m[nums[i]] = i;
        }
        return {};
        
       //............................................................................................. 
        
//         vector<pair<int,int>> v;
//         int n=nums.size();
//         for(int i=0;i<n;i++) v.push_back({nums[i],i});
//         sort(v.begin(),v.end());
//         int s=0,e=n-1;
//         while(s<e){
//             int sum =v[s].first+v[e].first;
//             if(sum==target)                              // TC -> O(nlogn) SC->O(n) 
//                 return {v[s].second,v[e].second};        // this is used when array is sorted
//             else if(sum>target)
//                 e--;
//             else
//                 s++;
//         }
//         return {};
        
    }
};