class Solution {
public:
    int scoreOfParentheses(string s) {
        // stack<int> stack;        // O(n)
        // int cur=0;
        // for(char c:s){
        //     if(c=='('){
        //         stack.push(cur);
        //         cur=0;
        //     }
        //     else
        //     {
        //         cur+=stack.top()+max(cur,1);
        //         stack.pop();
        //     }
        // }
        // return cur;
        
        
        int res=0,l=0;              // O(1)
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
                l++;
            else
                l--;
            if(s[i]==')'&&s[i-1]=='(')
                res+=1<<l;
        }
        return res;
    }
};