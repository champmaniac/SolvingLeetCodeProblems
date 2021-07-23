class Solution {
public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(k<=0 || sum%k!=0)
            return false;
        vector<int> visited(n,0);
        return partition(nums,visited,0,k,0,0,sum/k);
            
    }
    bool partition(vector<int>& nums,vector<int>& visited,int start_index,int k, int curr_sum,int curr_num,int target )
    {
        int n=nums.size();
        if(k==1)
            return true;
        if(curr_sum ==target && curr_num>0)
            return partition(nums,visited,0,k-1,0,0,target);
        if(curr_sum>target) return false;
        for(int i = start_index; i<n;i++){
            if(!visited[i])
            {
                visited[i]=1;
                if(partition(nums,visited,i+1,k,curr_sum+nums[i],curr_num++,target))
                    return true;
                visited[i]=0;
            }
        }
        return false;
    }
};