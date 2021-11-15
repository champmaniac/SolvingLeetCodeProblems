class Solution {
public:
    int timeRequiredToBuy(vector<int>& a, int k) {
        int tm=0;
        for(int i=0;i<a.size();i++){
            if(i<=k) tm=tm+min(a[i],a[k]);
            else tm=tm+min(a[i],a[k]-1);
        }
        return tm;
    }
};