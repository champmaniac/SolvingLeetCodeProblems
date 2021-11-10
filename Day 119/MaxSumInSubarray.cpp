class Solution{
    public:
        long long pairWithMaxSum(long long arr[], long long n)
    {
        // Your code goes here
        if(n<2)
            return -1;
        long long  res = arr[0]+arr[1];
        for(int i=1;i<n-1;i++){
            res=max(res,arr[i]+arr[i+1]);
        }
        return res;
    }
};