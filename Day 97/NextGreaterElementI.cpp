class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findnums, vector<int>& nums) {
        stack<int> st;
        unordered_map<int,int> mp;
        for(int n:nums){
            while(st.size() && st.top()<n){
                mp[st.top()]=n;
                st.pop();
            }
            st.push(n);
        }
        vector<int> ans;
        for(int n:findnums){
            ans.push_back(mp.count(n)?mp[n]:-1);
        }
        return ans;
    }
};