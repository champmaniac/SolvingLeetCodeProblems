const string HEX = "0123456789abcdef";
class Solution {
public:
    string toHex(int num) {
        if(num==0)
            return "0";
        string res;
        int count=0;
        while(num && count++<8){
            res=HEX[(num & 0xf)]+res;
            num>>=4;
        }
        return res;
        
    }
};