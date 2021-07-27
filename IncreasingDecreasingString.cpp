class Solution {
public:
    string sortString(string s) {                     //Time Complexity: O( N * 2 * 26 ) = O(N) for very                                                                                                   large N
                                                      //Space Complexity: O ( 52 ) = constant space
        int charCount[26]={};
        int n = s.size();
        for(char ch:s){
            charCount[ch-'a']++;
        }
        string ans="";
        while(n!=ans.size()){
            for(int i=0;i<26;++i){
                ans+=string(--charCount[i]>=0?1:0 ,'a'+i);
            }
            for(int i=25;i>=0;--i){
                ans+=string(--charCount[i]>=0?1:0 ,'a'+i);
            }
        }
        return ans;
    }
};