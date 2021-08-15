class Solution {
public:
    // bool seen[16]={};
    // int res=0;
    // int countArrangement(int n, int pos=1) {
    //     if(n<4) return n;
    //     if(pos>n) return res++;
    //     for(int i=1;i<=n;i++){
    //         if(!seen[i] && (i%pos==0 || pos%i==0 )){
    //            seen[i] =true;
    //            countArrangement(n,pos+1);
    //            seen[i] =false;
    //         }
    //     }
    //     return res;
    
    int seen=0;
    int res=0;
    int countArrangement(int n, int pos=-1) {
        if(n<4) return n;
        if(pos==-1) pos=n;
        if(!pos) return res++;
        for(int i=1,bit;i<=n;i++){
            bit=1<<i;
            if(!(seen&bit) && (i%pos==0 || pos%i==0 )){
               seen^=bit;
               countArrangement(n,pos-1);
               seen^=bit;
            }
        }
        return res;
    
    
               
    }
};