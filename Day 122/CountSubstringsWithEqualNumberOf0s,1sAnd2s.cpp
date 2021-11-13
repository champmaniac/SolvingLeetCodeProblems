class Solution {
  public:
    long long getSubstringWithEqual012(string str) {
        // code here
        long long int zero=0,one=0,two=0,count=0;
        unordered_map<string,long long> mp;
        for(int i=0;i<str.size();i++){
            if(str[i]=='0')
                zero++;
            else if(str[i]=='1')
                one++;
            else
                two++;
            string key=to_string(one-zero)+"#"+to_string(two-one);
            if(one-zero==0 && two-one==0)
                count++;
            if(mp.find(key)!=mp.end())
                count+=mp[key];
            mp[key]++;
        }
        return count;
    }
};