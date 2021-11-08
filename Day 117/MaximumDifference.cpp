class Solution{
    public:
    /*You are required to complete this method */
    int findMaxDiff(int A[], int n)
    {
      //Your code here
      vector<int> left;
      vector<int> right;
      left=help(A,n);
      reverse(A,A+n);
      right=help(A,n);
      reverse(right.begin(),right.end());
      int ans=0;
      for(int i=0;i<n;i++){
          ans=max(ans,abs(left[i]-right[i]));
      }
      return ans;
      
    }
    vector<int> help(int A[], int n)
    {
        stack<int> st;
        st.push(A[0]);
        vector<int> ls;
        ls.push_back(0);
        for(int i=1;i<n;i++)
        {
            while(!st.empty()&& st.top()>=A[i])
                st.pop();
            if(st.empty())
                ls.push_back(0);
            else
                ls.push_back(st.top());
            st.push(A[i]);
        }
        return ls;
    }
};