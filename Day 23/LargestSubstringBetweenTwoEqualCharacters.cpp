class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {       
        unordered_map<int,int> mp;
        int len=-1;
        for(int i=0;i<s.size();i++){                        // O(N) one pass solution
            if(mp.count(s[i]))
                len=max(len,i-mp[s[i]]-1);
            else
                mp[s[i]]=i;
            
        }
        return len;
    }
};