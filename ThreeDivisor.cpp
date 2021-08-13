class Solution {
public:
    bool isThree(int n) {
        // if(n==1)              // Brute-Force
        //     return false;
        // int d=2;
        // for(int i =2;i<n && d<=3;i++){
        //     d+=n%i==0;
        // }
        // return d==3;
        
        unordered_set<int> p2 = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101 };
        return (int)sqrt(n)*sqrt(n)==n && p2.count(sqrt(n));
        
    }
};