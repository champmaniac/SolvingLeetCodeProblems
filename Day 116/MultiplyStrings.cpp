class Solution {
public:
    string multiply(string A, string B) {
        if(A=="0" || B=="0") return "0";
        if(size(A)<size(B)) return multiply(B,A);
        string ans="";
        for(int j=size(B)-1,pad=0;j>=0;j--)
        {
            auto res=multiplyDigits(A,B[j],pad++);
            ans=addString(ans,res);
        }
        return ans;
    }
    
    string multiplyDigits(string& s,char c,int pad)
    {
        int i=size(s)-1,carry=0,digit1=c-'0',digit2,res;
        string ans=string(pad,'0');
        while(i>=0)
        {
            digit2=s[i--]-'0';
            res=digit1*digit2+carry;
            carry=res/10;
            ans+=res%10+'0';
        }
        if(carry) ans+=carry+'0';
        reverse(ans.begin(),ans.end());
        return ans;
    }
    
    string addString(string &A,string& B)
    {
        if(size(A)<size(B)) return addString(B,A);
        int i=size(A)-1,j=size(B)-1,carry=0,digit1,digit2,res;
        string ans="";
        while(i>=0)
        {
            digit1=A[i--]-'0',digit2=j>=0?(B[j--]-'0'):0;
            res=digit1+digit2+carry;
            carry=res/10;
            ans+=res%10+'0';
        }
        if(carry)
            ans+=carry+'0';
        reverse(ans.begin(),ans.end());
        return ans;
    }
};