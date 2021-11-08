class Solution { // TC O(N)
  public:
    int findMaxLen(string s) {
        // code here
        stack<int> st;
        int n = s.size();
        st.push(-1);
        int res=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(')
                st.push(i);
            else{
                if(!st.empty())
                    st.pop();
                if(!st.empty())
                    res=max(res,i-st.top());
                else
                    st.push(i);
            }
        }
        return res;
    }
};