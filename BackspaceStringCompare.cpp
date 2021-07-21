class Solution {
public:
    bool backspaceCompare(string s, string t) {
        // return getString(s)==getString(t);         TC --> O(N) SC --> O(N)
        
        int n=s.size()-1,m=t.size()-1;
        int back;
        while(true)                                 //TC --> O(N) SC --> O(1)
        {
            back=0;
            while(n>=0 && (back>0 || s[n]=='#')){
                back+=s[n]=='#'?1:-1;
                n--;
            }
            back=0;
            while(m>=0 && (back>0 || t[m]=='#')){
                back+=t[m]=='#'?1:-1;
                m--;
            }
            if(n>=0 && m>=0 && s[n]==t[m]){
                n--;
                m--;
            }
            else
                break;
            
        }
        return n==-1 && m==-1;
    }
    
    // string getString(string &str){
    //     int n=str.size(),count=0;                  TC --> O(N) SC --> O(N)
    //     string res="";
    //     for(int i=n-1;i>=0;i--){
    //         char ch=str[i];
    //         if(ch=='#')
    //             count++;
    //         else
    //         {
    //             if(count>0)
    //                 count--;
    //             else
    //                 res+=ch;
    //         }
    //     }
    //     return res;
    // }
};