bool check(int mid, vector<int> &arr, int m){
    int n=arr.size();
    for(int i=0;i<n;i++){
        m-=(arr[i]/mid);
        if(arr[i]%mid==0) m++;
    }
    return m>=0;
}

int minCountOfBallsInBag(vector<int> &arr, int n, int m) 
{
    // Write your code here.
    int l =1, r= 1e9;
    int res=0;
    while(l<=r){
        int mid = l+(r-l)/2;
        if(check(mid,arr,m))
        {
            res=mid;
            r= mid-1;
        }
        else
            l=mid+1;
    }
    return res;
}