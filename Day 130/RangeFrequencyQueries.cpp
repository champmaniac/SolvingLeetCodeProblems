class RangeFreqQuery {
private:
    unordered_map<int,vector<int>> mpp;
public:
    RangeFreqQuery(vector<int>& arr) {
        int n =arr.size();
        for(int i=0;i<n;i++){
            mpp[arr[i]].push_back(i);
        }
    }
    int query(int left, int right, int value) {
        vector<int> &vec = mpp[value];
        int lb = lower_bound(vec.begin(),vec.end(),left)-vec.begin();
        int ub = upper_bound(vec.begin(),vec.end(),right)-vec.begin();
        
        return ub-lb;
        
    }
};

/**
 * Your RangeFreqQuery object will be instantiated and called as such:
 * RangeFreqQuery* obj = new RangeFreqQuery(arr);
 * int param_1 = obj->query(left,right,value);
 */