// const N = 1e5;                     // TC O(nlogn) SC O(n)
// int power[N];

unordered_map<int,int> power; 
int get_power(int n){
    if(n==1) return 0;
    if(power[n]!=0) return power[n];
    if(n&1){
        return power[n]= 1+ get_power(3*n+1);
    }
    else{
        return power[n]= 1+ get_power(n/2);
    }
}

bool cmp(int x,int y){
    int px =get_power(x);
    int py =get_power(y);
    if(py==px) return x<y;
    return px<py;
}

class Solution {
public:
    int getKth(int lo, int hi, int k) {
        vector<int> arr;
        for(int i=lo;i<=hi;i++){
            arr.push_back(i);
        }
        sort(arr.begin(),arr.end(),cmp);
        return arr[k-1];
    }
};