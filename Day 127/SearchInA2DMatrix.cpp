#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    // Write your code here.
    int flag=0;
    int row_pointer=0, col_pointer=n-1;
    while(row_pointer<m && col_pointer>=0){
        if(mat[row_pointer][col_pointer]==target){
            flag=1;
            break;
        }
        else if(mat[row_pointer][col_pointer]>target)
            col_pointer--;
        else
            row_pointer++;
    }
    return flag;
}