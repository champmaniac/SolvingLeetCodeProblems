class Solution {
public:
    string simplifyPath(string path) {
        int n = path.size();
        string res,temp;
        vector<string> st;
        stringstream ss(path);
        while(getline(ss,temp,'/')){
            if(temp=="" || temp ==".") continue;
            if(!st.empty() && temp=="..")
                st.pop_back();
            else if(temp!="..")
                st.push_back(temp);
        }
        for(auto s:st){
            res+="/"+s;
        }
        return st.empty()? "/":res;
        
    }
};