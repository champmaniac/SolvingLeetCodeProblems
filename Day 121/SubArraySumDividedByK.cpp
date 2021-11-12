class Solution{

	public:
	long long subCount(long long arr[], int N, long long k)
	{
	    // Your code goes here
	    int curSum=0;
	    int count=0;
	    unordered_map<int,int> mp;
	    for(int i=0;i<N;i++){
	        curSum+=arr[i];
	        if(((curSum%k)+k)%k==0)
	            count++;
	        if(mp.find(((curSum%k)+k)%k)!=mp.end())
	            count+=mp[((curSum%k)+k)%k];
	        mp[((curSum%k)+k)%k]++;
	    }
	    return count;
	}

};