class Solution {
public:
    int maxDistance(vector<int>& a) {
        
        int n = a.size();
        int j =n-1, i =0;
        while(a[j]==a[0]) j--;
        while(a[i]==a[n-1]) i++;
        return max(j, n-i-1);
        
        
        
        // int n = a.size(); // O(n^2)
        // int mxDistance=0;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(a[i]!=a[j])
        //             mxDistance = max(mxDistance, j-i);
        //     }
        // }
        // return mxDistance;
    }
};