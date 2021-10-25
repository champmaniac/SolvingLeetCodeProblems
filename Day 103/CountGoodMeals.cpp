class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        unordered_map<int,int> lks;
        long long ans=0;
        for(auto x:deliciousness)
        {
            for(int i=1;i<(1<<22);i*=2)
            {
                if(lks.count(i-x))
                    ans+=lks[i-x];
            }
            lks[x]+=1;
        }
        return ans%(int)(1e9+7);
    }
};