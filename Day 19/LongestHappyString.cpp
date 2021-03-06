class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        int total=a+b+c;
        int A=0,B=0,C=0;
        string s="";
        for(int i = 0; i < total; i++){
            if ((a >= b && a >= c && A != 2) || (B == 2 && a > 0) || (C == 2 && a > 0)){
                s+="a";
                a--,A++,B = 0,C = 0;  
            }
            else if ((b >= a && b >= c && B != 2) || (A == 2 && b > 0) || (C == 2 && b > 0)){
                s+="b";
                b--,B++,A = 0,C = 0;
            }
            else if ((c >= a && c >= b && C != 2) || (B == 2 && c > 0) || (A == 2 && c > 0)){
                s+="c";
                c--,C++,A = 0,B = 0;  
            }
        }
        return s;
    }
};