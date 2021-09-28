class CombinationIterator {
public:
    vector<string> temp;
    int i;
    CombinationIterator(string characters, int combinationLength):i(0) {
        backTrack(characters,combinationLength,0,"");
    }
    void backTrack(const string& characters, int combinationLength, int idx,string ans){
        for(int i=idx;i<characters.size() && ans.size()<combinationLength;i++)            
            backTrack(characters,combinationLength,i+1,ans + characters[i]);            
        if(ans.size()==combinationLength) temp.push_back(ans);
    }
    
    string next() {return temp[i++];    }
    bool hasNext() {return i<temp.size();    }
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */