class Solution {
  public:
    bool areKAnagrams(string str1, string str2, int k) {
        // code here
        int n = str1.size();
        if(str2.size()!=n) return false;
        int count1[26]={0},count2[26]={0};
        for(int i=0;i<n;i++){
            count1[str1[i]-'a']++;
        }
        for(int j=0;j<n;j++){
            count2[str2[j]-'a']++;
        }
        int count=0;
        for(int i=0;i<26;i++){
            if(count1[i]>count2[i])
                count=count+abs(count1[i]-count2[i]);
        }
        return (count<=k);
    }
};