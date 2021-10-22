class Solution {
public:
    string frequencySort(string s) {    // TC O(logn) and TC O(n) since priority queue can store upto 26 
        unordered_map<char,int> mp;     // only so TC is O(n) and SC O(n)
        priority_queue<pair<int,char>> maxheap;
        for(auto c:s)
            mp[c]++;
        for(auto it:mp)
            maxheap.push({it.second,it.first});
        s="";
        while(!maxheap.empty()){
            s+=string(maxheap.top().first,maxheap.top().second); //frequency times the character
            maxheap.pop();
        }
        return s;
        
    }
};