class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // int i,j;
        // vector<int>maxProd;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         maxProd.push_back((nums[i]-1)*(nums[j]-1));
        //     }
        // }
        // return *max_element(maxProd.begin(),maxProd.end());   // O(n^2)
        
        int i,max1,max2;
        max1=max2= 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max1){
                max2=max1;
                max1=nums[i];
            }
            else if(nums[i]>max2){
                max2=nums[i];
            }
        }
        int ans=(max1-1) * (max2-1); // O(n)
        return ans;
    }
};