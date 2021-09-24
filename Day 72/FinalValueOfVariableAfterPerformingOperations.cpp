class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int res =0;
        for(auto i:operations){
            res+=i[1]=='+'?1:-1;
        }
        return res;
        
    }
};