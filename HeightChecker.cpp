class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> sorted = heights;
        sort(sorted.begin(),sorted.end());
        int res=0;
        for(int i=0;i<sorted.size();i++){
            res+= sorted[i]!=heights[i];
        }
        return res;
    }
};