class Solution {
public:
    int minimizedMaximum(int n, vector<int>& arr) {
        int low=1;
        int high=*max_element(arr.begin(),arr.end()); // we can write 100000 i.e 10 to the power 5 also as the max
        int ans=high;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int cnt=0;
            for(auto it:arr)
            {
                cnt+=(it/mid);
                if(it%mid) cnt+=1;
            }
            if(cnt<=n)
            {
                ans=mid;
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return ans;
    }
};