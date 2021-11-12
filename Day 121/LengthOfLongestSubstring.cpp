class Solution{
    public:
    int longestUniqueSubsttr(string S){
        //code
        int i =0,j=0;
        vector<int> m(26,0);
        int res = INT_MIN;
        while(j<S.size()){
            m[S[j]-'a']++;
            if(m[S[j]-'a']==1){
                res=max(res,j-i+1);
                j++;
            }
            else
            {
                while(m[S[j]-'a']==2){
                    m[S[i++]-'a']--;
                }
                j++;
            }
        }
        return res;
    }
};