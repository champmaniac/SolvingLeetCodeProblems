class Solution {
private:
    bool isVowel(char ch){
        return ch=='a'||ch=='e'|| ch=='i'|| ch=='o'|| ch=='u';
    }
private:
    int countAtMostKVowels(string s,int k){
        int cnt=0;
        int n=s.size();
        unordered_map<char,int> vowelMap;
        int i=0;
        for(int j=0;j<n;j++){
            if(!isVowel(s[j])){
                //clear the map since the new substring will start
                vowelMap.clear();
                i=j+1;
                continue;
            }
            vowelMap[s[j]]++;
            while(vowelMap.size()>k){
                vowelMap[s[i]]--;
                if(vowelMap[s[i]]==0){
                    vowelMap.erase(s[i]);
                }
                i++;
            }
            cnt+=(j-i+1);
        }
        return cnt;
    }
public:
    int countVowelSubstrings(string word) {
        return countAtMostKVowels(word,5)-countAtMostKVowels(word,4);
    }
};