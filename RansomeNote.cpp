class Solution {
public:
    bool canConstruct(string r, string mag) {
        // int m[27]={0};
        // for(int i=0;i<mag.size();i++){
        //     m[mag[i]-'a']++;
        // }
        // for(int i=0;i<r.size();i++){
        //     m[r[i]-'a']--;
        // }
        // for(int i=0;i<27;i++){
        //     if(m[i]<0)
        //         return false; 
        // }
        // return true;
        
        
        int count[27]={0}; // we have 26 letters so we are creating a variable count of size 27                                                                                      initialized with 0
        for(char ch:mag)
            count[ch-'a']++;
        for(char ch:r){
            if(count[ch-'a']--<=0)
                return false;
        }
        return true;
    }
};