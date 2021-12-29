// Brute Force
// TC O(N) SC O(N)
void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
    int n = arr.size();
    vector<int> ans(n,0);
    int p =0;
    for(int i=0;i<=m;i++){
       	ans[p++]=arr[i];
    }
    for(int j=n-1;j>m;j--){
       	ans[p++]=arr[j];
    }
    for(int i=0;i<n;i++){
        arr[i]=ans[i];
    }
}


// Optimal Approach using two pointers
// TC O(N) SC O(1)

void reverseArray(vector<int> &arr, int m){
    int n = arr.size();
    int i =m+1;
    int j =n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}