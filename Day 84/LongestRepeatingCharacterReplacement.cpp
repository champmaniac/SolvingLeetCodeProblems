class Solution { // TC O(n) SC O(128)
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int res =0, maxf =0;
        unordered_map<int,int> count;
        for(int i=0;i<n;i++){
            maxf=max(maxf,++count[s[i]]);
            if(res-maxf<k)
                res++;
            else
                count[s[i-res]]--;
        }
        return res;
    }
};