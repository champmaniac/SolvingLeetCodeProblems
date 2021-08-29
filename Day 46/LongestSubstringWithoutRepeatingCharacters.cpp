class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> res(256,-1); // char range is from 0-255 so the size cannot be greater than 256
        int start=-1, maxlen=0;
        for(int i=0;i<s.size();i++){
            if(res[s[i]]>start)
                start=res[s[i]];
            res[s[i]]=i;
            maxlen=max(maxlen,i-start);
        }
        return maxlen;
    }
};