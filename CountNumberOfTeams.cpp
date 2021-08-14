class Solution {
public:
    int numTeams(vector<int>& r) {                       // Approach 1 Brute Force O(n^2)
        int res=0;
        for(int i=1;i<r.size()-1;i++){
            int leftLess=0,rightGreater=0;               // Ascending Order
            int leftGreater=0,rightLess=0;               // Descending Order
            for(int j=i-1;j>=0;--j){                     // Left Half
                if(r[i]>r[j])
                    leftLess++;
                else
                    leftGreater++;
            }
            for(int j=i+1;j<r.size();j++){               // Right Half
                if(r[i]<r[j])
                    rightGreater++;
                else
                    rightLess++;
            }
            res+=(leftLess * rightGreater) + (leftGreater*rightLess);
        }
        return res;
    }
};