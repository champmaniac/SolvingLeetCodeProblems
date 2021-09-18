class Solution { // TC O(m+n) SC O(m)
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        vector<int> res;
        for(int i=0;i<(int)nums1.size();++i) mp[nums1[i]]++;
        for(int i=0;i<(int)nums2.size();++i)
            if(mp.find(nums2[i])!=mp.end() && --mp[nums2[i]]>=0) res.push_back(nums2[i]);
        return res;
    }
};