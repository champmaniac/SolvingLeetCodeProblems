class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int left=0,right=n-1;                 // Two pointer apporach 
        int res=0;                            // TC --> O(N)
        int maxleft=0,maxright=0;             // SC --> O(1)      
        while(left<=right){
            if(height[left]<=height[right]){
                if(height[left]>=maxleft)
                    maxleft=height[left];
                else
                    res+=maxleft-height[left];
                left++;
            }
            else{
                if(height[right]>=maxright)
                    maxright=height[right];
                else
                    res+=maxright-height[right];
                right--;
            }
        }
        return res;
    }
};