class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) { // tc O(n2)
        // int n = nums.size();
        // vector<int> ans;
        // for(int i=1;i<=n;i++){
        //     if(find(nums.begin(),nums.end(),i)==nums.end()) // linear search
        //         ans.push_back(i);
        // }
        // return ans;
        
        // int n = nums.size();          // tc O(nlogn)
        // vector<int> ans;
        // sort(nums.begin(),nums.end());
        // for(int i=1;i<=n;i++)
        // {
        //     if(!binary_search(nums.begin(),nums.end(),i)) // binary search
        //         ans.push_back(i);
        // }
        // return ans;
        
        int n = nums.size(); // tc O(n)
        unordered_set<int> s(nums.begin(),nums.end()); // hashset
        vector<int> ans(nums.size()-s.size());
        for(int i=1,j=0;i<=n;i++){
            if(!s.count(i))
                ans[j++]=i;
        }
        return ans;
    }
};