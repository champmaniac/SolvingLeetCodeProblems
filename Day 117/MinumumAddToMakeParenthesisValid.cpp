class Solution {
public:
    int minAddToMakeValid(string s) {
        int count =0;
        int n =s.size();
        stack<int> st;
        for(int idx=0;idx<n;idx++){
            char ch = s[idx];
            if(st.size()>0){
                if(ch =='(')
                    st.push(ch);
                else if(ch==')' && st.top()=='(')
                    st.pop();
                else
                    count++;
            }
            else if(ch=='(' || ch==')')
                st.push(ch);
        }
        while(!st.size()==0)
        {
            count++;
            st.pop();
        }
        return count;
    }
};

// class Solution {
// public:
//     int minAddToMakeValid(string s) {
//         int l=0,r=0;
//         for(char c:s){
//             if(c=='(')
//                 r++;
//             else if(c==')' && r>0)
//                 r--;
//             else
//                 l++;                
//         }
//         return l+r;
//     }
// };