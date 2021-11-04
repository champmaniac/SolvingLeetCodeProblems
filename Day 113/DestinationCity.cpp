class Solution { // TC O(n) SC O(n)
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> StartingCities;
        for(auto& e: paths)
        {
            StartingCities.insert(e[0]);
        }
        for(auto& e:paths)
            if(!StartingCities.count(e[1]))
                return e[1];
        return "";
            
    }
};