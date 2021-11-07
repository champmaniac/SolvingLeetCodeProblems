class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<long long> st;
        vector<long long> v;
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty()&&st.top()<arr[i])
                st.pop();
            long long t=arr[i];
            if(st.empty())
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(st.top());
            }
            st.push(t);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};