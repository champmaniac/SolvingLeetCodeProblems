class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    vector<int> res;
	    sort(arr,arr+n);
	    for(int i=0;i<k;i++){
	        res.push_back(arr[n-1-i]);
	    }
	    return res;
	}

};