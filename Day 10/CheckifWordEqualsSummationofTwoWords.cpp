class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        return convert(firstWord)+convert(secondWord)==convert(targetWord);
    }
private:
    int convert(string s){
        int res=0;
        for(int i=0;i<s.size();i++){
            res=s[i]-'a'+res*10;
        }
        return res;
    }
};