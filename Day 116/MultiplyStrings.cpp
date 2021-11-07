class Solution{ // TC O(M*N) SC O(1)
public:
    string multiply(string &A, string& B)
    {
        if(A=="0" || B=="0") return "0";
         vector<int> res(num1.size()+num2.size(), 0);
        
        for (int i = num1.size()-1; i >= 0; i--) {
            for (int j = num2.size()-1; j >= 0; j--) {
                res[i + j + 1] += (num1[i]-'0') * (num2[j]-'0');
                res[i + j] += res[i + j + 1] / 10;
                res[i + j + 1] %= 10;
            }
        }
        
        int i = 0;
        string ans = "";
        while (res[i] == 0) i++;
        while (i < res.size()) ans += to_string(res[i++]);
        
        return ans;
    }
}


// class Solution {     // TC O(min(M, N)*(M+N))
// public:
//     string multiply(string A, string B) {
//         if(A=="0" || B=="0") return "0";
//         if(size(A)<size(B)) return multiply(B,A);
//         string ans="";
//         for(int j=size(B)-1,pad=0;j>=0;j--)
//         {
//             auto res=multiplyDigits(A,B[j],pad++);
//             ans=addString(ans,res);
//         }
//         return ans;
//     }
    
//     string multiplyDigits(string& s,char c,int pad)
//     {
//         int i=size(s)-1,carry=0,digit1=c-'0',digit2,res;
//         string ans=string(pad,'0');
//         while(i>=0)
//         {
//             digit2=s[i--]-'0';
//             res=digit1*digit2+carry;
//             carry=res/10;
//             ans+=res%10+'0';
//         }
//         if(carry) ans+=carry+'0';
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
    
//     string addString(string &A,string& B)
//     {
//         if(size(A)<size(B)) return addString(B,A);
//         int i=size(A)-1,j=size(B)-1,carry=0,digit1,digit2,res;
//         string ans="";
//         while(i>=0)
//         {
//             digit1=A[i--]-'0',digit2=j>=0?(B[j--]-'0'):0;
//             res=digit1+digit2+carry;
//             carry=res/10;
//             ans+=res%10+'0';
//         }
//         if(carry)
//             ans+=carry+'0';
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
// };