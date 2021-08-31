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
        for(int index=0;index<n;index++){
            if(nums[index]!=index)
                return index;
        }
        return n;
        
        
    }
    
    void swap(vector<int> &arr, int first, int second){
			int temp =arr[first];
			arr[first] = arr[second];
			arr[second] =temp;
		}
};