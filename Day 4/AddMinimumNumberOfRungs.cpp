class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        int curr_height=0,res=0;
        for(auto a:rungs){
            res+=(a-curr_height-1)/dist;        // TC --->O(n)
            curr_height=a;
        }
        return res;
    }
};