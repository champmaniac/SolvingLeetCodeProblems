class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);
        int maxlen=0;
        for(int i=0;i<s.size();i++)
        {
            int t=st.top();
            if(t!=-1 && s[i]==')'&&s[t]=='(')
            {
                st.pop();
                maxlen =max(maxlen,i-st.top());
            }
            else
                st.push(i);
        }
        return maxlen;
    }
};