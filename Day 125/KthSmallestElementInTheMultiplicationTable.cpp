class Solution { // O(m*n*(logmn))
public:
    int count(int m,int n,int x){
        int ans=0;
        for(int i=1;i<=m;i++){
            ans+=min(x/i,n);
        }
        return ans;
    }
    int findKthNumber(int m, int n, int k) {
        int l=1,r=m*n,mid,ans;
        while(l<=r){
            mid=(l+r)>>1;
            if(count(m,n,mid)<k)
                l=mid+1;
            else{
                r=mid-1;
                ans=mid;
            }
        }
        return ans;
    }
};