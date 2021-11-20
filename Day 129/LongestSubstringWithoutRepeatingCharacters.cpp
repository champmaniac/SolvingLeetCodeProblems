#include<vector>
int lengthOfLongestSubstring(string &s) {
    // Write your code here.
    vector<int> res(256,-1);
    int l =s.size();
    int start =-1, maxLen = 0;
    for(int i=0;i<l;i++){
        if(res[s[i]]>start)
            start=res[s[i]];
        res[s[i]]=i;
        maxLen = max(maxLen,i-start);
    }
    return maxLen;
}