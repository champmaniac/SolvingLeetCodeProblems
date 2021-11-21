class Solution {
private:
    string to_base(long long num ,int k){
        string res="";
        while(num!=0){
            res+=(char)((num%k)+'0');
            num=num/k;
        }
        return res;
    }
private:
    bool checkPalind(long long  num){
        long long rev = 0;
        long long dupnum =num;
        while(num!=0){
            rev=(rev*10)+(num%10);
            num=num/10;
        }
        return (rev==dupnum);
    }
private:
    bool checkpalindstr(string s){
        int n =s.size();
        for(int i=0;i<=n/2;i++){
            if(s[i]!=s[n-i-1]) return false;
        }
        return true;
    }
private:
    long long generateNumber(long long num, int odd){
        long long dupnum = num;
        if(odd) dupnum = dupnum/10;
        while(dupnum!=0){
            num = (num*10)+(dupnum%10);
            dupnum/=10;
        }
        return num; 
    }
public:
    long long kMirror(int k, int n) {
        long long sum=0;
        for(int i=1;n;i=i*10){
            // odd digit generation
            for(int j=i;j<i*10 && n;j++){
                long long num = generateNumber(j,true);
                string str = to_base(num,k);
                if(checkpalindstr(str)){
                    sum+=num;
                    n--;
                }
            }
            // even digit generation
            for(int j=i;j<i*10 &&n;j++){
                long long num = generateNumber(j,false);
                string str = to_base(num,k);
                if(checkpalindstr(str)){
                    sum+=num;
                    n--;
                }
            }
        }
        return sum;
    }
};