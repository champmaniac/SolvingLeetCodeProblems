class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int i=0,n=nums.size();
        while(i<n){     // This part is complete cyclic sort
            int correct = nums[i]-1;
            if(nums[i]!=nums[correct])
                swap(nums,i,correct);
            else
                i++;
        }
        vector<int> ans;
        for(int index=0;index<n;index++){
            if(nums[index]!=index+1){
                ans.push_back(nums[index]);
                ans.push_back(index+1);
                return ans;
            }
        }
        return {-1,-1};
    }
    
    void swap(vector<int> &arr, int first, int second){
			int temp =arr[first];
			arr[first] = arr[second];
			arr[second] =temp;
	}
};