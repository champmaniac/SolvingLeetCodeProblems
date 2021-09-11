class Solution { // TC O(N) Sc O(1)
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int res =0,cur=0;
        for(int& a:values){
            res = max(res,cur+a);
            cur = max(cur,a)-1;
        }
        return res;
    }
};