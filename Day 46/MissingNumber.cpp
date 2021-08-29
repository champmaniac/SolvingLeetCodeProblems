class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i=0,n=nums.size();
        while(i<n){
            if(nums[i]<n && nums[i]!=nums[nums[i]])
                swap(nums,i,nums[i]);
            else
                i++;
        }
        //case 1 for searching
        for(int j=0;j<n;j++){
            if(nums[j]!=j)
                return j;
        }
        //case 2 for searching
        return n;
        
        
    }
    
    void swap(vector<int> &arr, int first, int second){
			int temp =arr[first];
			arr[first] = arr[second];
			arr[second] =temp;
		}
};