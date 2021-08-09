class Solution {           // Minimalism O(n)
public:
    int minimumDeletions(string s) {
        int a=count(s.begin(),s.end(),'a'),b=0,res=a;
        for(auto ch:s){
            b+=ch=='b';
            a-=ch=='a';
            res=min(res,b+a);
        }
        return res;
    }
};