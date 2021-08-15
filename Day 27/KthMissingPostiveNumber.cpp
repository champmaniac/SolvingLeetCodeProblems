class Solution {             // TC O(logN) SC O(1)
public:
//     int findKthPositive(vector<int>& arr, int k) {
//         int n=arr.size();
//         int l=0,r=n-1;
//         int missing = compute(arr[n-1],n);
//         while(l<=r){
//             int mid =l+(r-l)/2;
//             missing = compute(arr[mid],mid+1);
//             if(missing>=k)
//                 r=mid-1;
//             else
//                 l=mid+1;
            
//         }
        
//         // Right ->-1
//         if(r==-1) return k;
//         return arr[r]+k-compute(arr[r],r+1);
//     }
//     int compute(int actual, int expected){
//         return actual -expected;
//     }
    
    
    
    // TC O(logN) SC O(1)
    
    int findKthPositive(vector<int>& arr, int k) {
       int l=0,r=arr.size(),mid;
        while(l<r){
            mid=(l+r)/2;
            if(arr[mid]-1-mid<k)
                l=mid+1;
            else
                r=mid;
        }
        return l+k;
    }
};