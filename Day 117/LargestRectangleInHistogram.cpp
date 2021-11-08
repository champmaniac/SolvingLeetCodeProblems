class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        heights.push_back(0);
        int n = heights.size(),area=0;
        stack<int> st;
        for(int i=0;i<n;i++)
        {
            while(!st.empty()&& heights[st.top()]>heights[i])
            {
                int h=heights[st.top()]; st.pop();
                int l =st.empty()?-1:st.top();
                area=max(area,h*(i-l-1));
            }
            st.push(i);
        }
        return area;
    }
};