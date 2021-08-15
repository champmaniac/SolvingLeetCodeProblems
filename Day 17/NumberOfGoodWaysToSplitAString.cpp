class Solution {
public:
    int numSplits(string s) {
//         int n=s.size();
//         vector<int> prefix(n);
//         vector<int> suffix(n);
//         unordered_set<char> preSet;
//         unordered_set<char> suffSet;
        
//         for(int i=0;i<n;i++){
//             preSet.insert(s[i]);
//             suffSet.insert(s[n-1-i]);
//             prefix[i] =preSet.size(); // left-->right
//             suffix[n-1-i]= suffSet.size(); // right--> left
//         }
//         int goodways=0;
//         for(int i=1;i<=n-1;i++){
//             if(prefix[i-1]==suffix[i])
//                 goodways++;
//         }
//         return goodways;
        
        int l[26]={}, r[26]={}, d_l=0,d_r=0,res=0;
        for(char ch:s){
            d_r+=++r[ch-'a']==1;
        }
        for(int i=0;i<s.size();i++){
            d_l+=++l[s[i]-'a']==1;
            d_r-=--r[s[i]-'a']==0;
            res+=d_l==d_r;
        }
        return res;
    }
};