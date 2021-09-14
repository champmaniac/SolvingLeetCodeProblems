class Solution { // Time O(2^N) Space O(2^N)
public:
    vector<int> circularPermutation(int n, int start) {
        vector<int> res;
        for(int i =0;i< 1<<n;i++){
            res.push_back(start^i^i>>1);
        }
        return res;
    }
};