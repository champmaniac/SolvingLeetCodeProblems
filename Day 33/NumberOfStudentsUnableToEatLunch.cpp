class Solution {  //TC O(n) SC O(2)
public:
    int countStudents(vector<int>& A, vector<int>& B) {
        int count[]={0,0},k,n=A.size();
        for(auto a: A)
            count[a]++;
        for(k =0;k<n && count[B[k]]>0 ;k++){
            count[B[k]]--;
        }
        return n-k;
    }
};