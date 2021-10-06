class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.size();
        vector<int> res;
        for(int i=0;i<n;){
            int found = s.find_last_of(s[i]);
            int x=i;
            while(x<found)
            {
                x++;
                int found2 = s.find_last_of(s[x]);
                if(found2>found)
                    found=found2;
            }
            res.push_back(x-i+1);
            i=x+1;
        }
        return res;
        
    }
};