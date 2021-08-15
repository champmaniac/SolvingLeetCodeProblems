class Solution {                           //TC O(m log m), where m is the number of unique numbers
public:                                    //SC O(m) for multiset and priority queue
    int minSetSize(vector<int>& arr) {     
        unordered_map<int,int> mp;         
        for(int i=0;i<arr.size();i++){     
            mp[arr[i]]++;
        }
        vector<int> v;
        for (auto [_, freq] : mp) v.push_back(freq);
        sort(v.begin(), v.end());           // TC(nlogn) since we are sorting // SC(n)
        int n=arr.size()/2,ans=0;
        for(int i=v.size()-1;n>0&&i>=0;i--){
            ans++;
            n-=v[i];
        }
        return ans;
        
        // unordered_map<int, int> mp;    //Count the occurrences of each number using a hash map.
        // multiset<int, greater<int>> s; //Sort occurrences in the descending order using a multiset.
        // for(auto n:arr) ++mp[n];
        // for(auto &p:mp) s.insert(p.second);
        // int res=0,count=0;
        // for(auto it= begin(s);count*2<arr.size();++it){
        //     ++res;
        //     count+=*it;
        // }
        // return res;
        
        
        // unordered_map<int,int> mp;
        // priority_queue<int> pq;
        // for (auto n : arr) ++mp[n];
        // for (auto &p : mp) pq.push(p.second);
        // int res = 0, cnt = 0;
        // while (cnt * 2 < arr.size()) {
        //     ++res;
        //     cnt += pq.top(); 
        //     pq.pop();
        // }
        // return res;
        
    }
};