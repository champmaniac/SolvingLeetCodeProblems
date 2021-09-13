class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int l=0,r=n-1;                 // Two pointer apporach 
        int res=0;                            // TC --> O(N)
        int maxleft=0,maxright=0;             // SC --> O(1)      
        while(l<=r){
            if(height[l]<=height[r]){
                if(height[l]>=maxleft)
                    maxleft=height[l];
                else
                    res+=maxleft-height[l];
                l++;
            }
            else{
                if(height[r]>=maxright)
                    maxright=height[r];
                else
                    res+=maxright-height[r];
                r--;
            }
        }
        return res;
    }
};