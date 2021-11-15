class Solution{
    public:
    int count4Divisibiles(int arr[], int n)
    {
        // Complete the function
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]%4]++;
        }
        int res1= (mp[0]*(mp[0]-1))/2;
        int res2= (mp[2]*(mp[2]-1))/2;
        int res3= (mp[1]*mp[3]);
        return res1+res2+res3;
    }
};