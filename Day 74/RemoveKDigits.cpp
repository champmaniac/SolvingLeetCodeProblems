class Solution {
public:
    string removeKdigits(string num, int k) {
        // int n = num.size();
        // stack<char> st;
        // for(char c:num){
        //     while(!st.empty() && k>0 && st.top()>c){
        //         st.pop();
        //         k-=1;
        //     }
        //     if(!st.empty() || c!='0')
        //         st.push(c);
        // }
        // while(!st.empty() && k--){
        //     st.pop();
        // }
        // if(st.empty())
        //     return "0";
        // while(!st.empty()){
        //     num[n-1] = st.top();
        //     st.pop();
        //     n-=1;
        // }
        // return num.substr(n);
        
        string ans ="";
        for(char c:num){
            while(ans.size() && ans.back()>c && k){
                ans.pop_back();
                k--;
            }
            if(ans.size() || c!='0'){
                ans.push_back(c);
            }
        }
        while(ans.size() && k--)
            ans.pop_back();
        return ans.empty()?"0":ans;
    }
};