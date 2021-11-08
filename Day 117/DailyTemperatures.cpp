class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        stack<int> st;
        st.push(n-1);
        vector<int> res(n);
        for(int i=n-2,j;i>=0;--i){
            j=temp[i];
            while(st.size()&&j>=temp[st.top()])
                st.pop();
            if(st.size())
                res[i]=st.top()-i;
            st.push(i);
        }
        return res;
    }
};