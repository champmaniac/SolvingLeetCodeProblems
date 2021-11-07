class Solution {
private:
    bool isVowel(char ch){
        return ch=='a'||ch=='e'|| ch=='i'|| ch=='o'|| ch=='u';
    }
public:
    long long countVowels(string word) {
        long long n = word.size();
        long long ans=0;
        for(long long  i=0;i<n;i++){
            if(isVowel(word[i]))
                ans+=(i+1)*(n-i);
        }
        return ans;
    }
};

// class Solution { // TLE
// private:
//     bool isVowel(char ch){
//         return ch=='a'||ch=='e'|| ch=='i'|| ch=='o'|| ch=='u';
//     }
// public:
//     long long countVowels(string word) {
//         int n=word.size();
//         long long cnt=0;
//         for(int i=0;i<n;i++)
//         {
//             long long c=0;
//             for(int j=i;j<n;j++){
//                 if(isVowel(word[j])) c++;
//                 cnt+=c;
//             }
//         }
//         return cnt;
//     }
// };