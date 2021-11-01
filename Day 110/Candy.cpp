class Solution {
public:
    int candy(vector<int>& ratings) {
        int len = ratings.size(),res=0,i;
        if(len>0)
        {
            vector<int> num(len,0);
            num[0]=1;
            // forward scan
            for(i=1;i<len;i++)
                num[i]=ratings[i]>ratings[i-1]?num[i-1]+1:1;
            //backward scan
            for(i=len-2,res=num[len-1];i>=0;--i)
            {
                if((ratings[i]>ratings[i+1])&&num[i]<(num[i+1]+1)) num[i]=num[i+1]+1;
                res+=num[i];
            }
        }
        return res;
    }
};