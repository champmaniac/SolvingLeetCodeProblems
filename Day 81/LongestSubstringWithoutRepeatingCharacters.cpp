class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> res(256,-1);
        int start =-1, maxlen=0;
        for(int i=0;i<s.size();i++){
            if(res[s[i]]>start)
                start=res[s[i]];
            res[s[i]] =i;
            maxlen = max(maxlen,i-start);
        }
        return maxlen;
    }
};