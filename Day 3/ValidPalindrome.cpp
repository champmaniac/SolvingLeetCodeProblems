class Solution {
public:
    bool isPalindrome(string s) {
        int l=0;
        int h=s.size()-1;
        while(l<h){
            if(!isalnum(s[l])) l++;
            else if(!isalnum(s[h])) h--;
            else if(tolower(s[l])!=tolower(s[h]))      // TC ---> O(n)
                return false;
            else{
                l++;
                h--;
            }
        }
        return true;
    }
};