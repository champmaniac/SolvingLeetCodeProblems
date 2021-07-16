class Solution {
public:
    string minRemoveToMakeValid(string s) {
        
    //     stack<int> st;                      // TC ---> O(n) Sc---> O(n) [for stack i.e extra space]
    //     for(int i=0;i<s.size();i++){
    //         if(s[i]=='(') // for open parentheses push into stack
    //             st.push(i);
    //         else if(s[i]==')'){ // for closing parentheses 
    //             if(st.empty())  // match not found? mark it bcoz we need to remove it later.
    //                 s[i]='*';
    //             else            // match found then pop it.
    //                 st.pop();
    //         }
    //     } 
    //     // if stack is not empty, that means it contains open parentheses indexes which don't have any matching closing parentheses
    //     while(!st.empty())
    //     {
    //         s[st.top()]='*';
    //         st.pop();
    //     }
    //     string ans="";
    //     for(int i=0;i<s.size();++i){
    //         if(s[i]!='*')
    //             ans.push_back(s[i]);// just push the not marked character to the end of "ans"
    //     }
    //     return ans;
    // }
        
    // Step 1 ---- Left --> Right
    int n =s.size();                       // TC ---> O(n) Sc---> O(1) [No stack i.e No extra space]
    int count=0; 
        for(int i=0;i<n;++i){
            if(s[i]=='('){ // for open bracket
		        ++count;
	        }
	        else if(s[i]==')'){ // for close bracket
		        if(count==0){  // if no. of close brackets > no. of open brackets
			        s[i]='#';
		        }
		        else{
			// if matching parentheses found decrease count
			        --count;
		        }
	        }
        }
        // Step 2 ---- Right --> Lefft
        count=0;
        for(int i=n-1;i>=0;--i){
            if(s[i]==')'){ // for close bracket
                ++count;
            }
            else if(s[i]=='('){ // for open bracket
                if(count==0){ // if no. of open brackets > no. of close brackets
                    s[i]='#';
                }
                else{
                    // if matching parentheses found decrease count
                    --count;
                }
            }
        }
        string ans="";
        for(int i=0;i<n;++i){
            if(s[i]!='#'){ 
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};