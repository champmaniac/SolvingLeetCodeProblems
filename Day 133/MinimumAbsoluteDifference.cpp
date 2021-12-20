class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> res;
        int n =arr.size();
        int min_diff = INT_MAX;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-1;i++){
            min_diff = min(arr[i+1]-arr[i],min_diff);
        }
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]==min_diff)
                res.push_back({arr[i],arr[i+1]});
        }
        return res;
    }
};