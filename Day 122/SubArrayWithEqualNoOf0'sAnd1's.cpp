class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        //Your code here
        unordered_map<int,int> mp;
        long long int curSum=0;
        for(int i=0;i<n;i++){
            curSum+=(arr[i]==0)?-1:arr[i];
            mp[curSum]++;
        }
        int count=0;
        for(auto itr=mp.begin();itr!=mp.end();itr++){
            if(itr->second>1)
                count+=((itr->second*(itr->second-1))/2);
        }
        if(mp.find(0)!=mp.end())
            count+=mp[0];
        return count;
    }
};