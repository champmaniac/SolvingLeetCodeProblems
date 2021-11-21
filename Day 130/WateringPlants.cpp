class Solution {  // tc O(N)
public: 
    int wateringPlants(vector<int>& a, int capacity) {
        int steps=0;
        int capCurrent =capacity;
        int n =a.size();
        for(int i=0;i<n;i++){
            if(a[i]>capCurrent){
                //refill
                capCurrent = capacity;
                steps+=(2*i+1);
            }
            else
            {
                steps+=1;
            }
            // this much will be required
            capCurrent -=a[i];
        }
        return steps;
    }
};