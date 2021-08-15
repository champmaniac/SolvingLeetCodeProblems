class MapSum {
public:
    /** Initialize your data structure here. */
    unordered_map<string,int>mp;
    MapSum() {
        
    }
    
    void insert(string key, int val) {
        mp[key]=val;
    }
    
    int sum(string prefix) {
        int sum=0;
        for(auto i:mp){
            if(i.first.find(prefix)==0)
                sum+=i.second;
        }
        return sum;
    }
};