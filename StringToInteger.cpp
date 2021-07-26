class Solution {
public:
    int myAtoi(string s) {
        int i=0,n=s.size();
        while(s[i]==' ')
            i++;
        int flag=0; // To check weather the integer is positive or negitive 
        long long int a=0; //To over come the overflow problem if you use int it may overflow 
        if(s[i]=='-'){
            flag=1;
            i++;
        }
        if(s[i]=='+' && flag==0)//To overcome test case like '+42'
            i++;
        while(i<n && s[i]>='0' && s[i]<='9'){
            a=a*10+(s[i]-'0');
            if(a>INT_MAX && flag==0)
                return INT_MAX;
            if(-a<INT_MIN && flag==1)
                return INT_MIN;
            i++;
        }
        if(flag==1)
            return -a;
        return a;
    }
};