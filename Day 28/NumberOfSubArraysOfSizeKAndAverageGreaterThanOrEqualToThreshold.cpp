class Solution {         // TC O(N) SC O(1)
public: 
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int subArraySum=0;
        int i;
        for(i=0;i<k;i++){
            subArraySum+=arr[i];
        }
        int res=0;
        while(i<arr.size()){
            if(subArraySum/k>=threshold)
                res++;
            subArraySum+=arr[i];
            subArraySum-=arr[i-k];
            i++;
        }
        if(subArraySum/k>=threshold)
                res++;
        return res;
        
        
        // int count=0,sum=0,t=threshold*k;
        // for(int i=0;i<arr.size();i++){
        //     sum+=arr[i];
        //     if(i>=k) sum-=arr[i-k];
        //     if(i>=k-1 && sum>=t)
        //         count++;
        // }
        // return count;
    }
};