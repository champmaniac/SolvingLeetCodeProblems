class Solution {
public:
    const vector<string> mp{
        "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"
    };
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits.empty()) return {};
        res.push_back("");
        for(auto digit:digits){
            vector<string> tmp;
            for(auto candidate: mp[digit-'0']){
                for(auto s:res)
                    tmp.push_back(s+candidate);
            }
            res.swap(tmp);
        }
        return res;
        
    }
};