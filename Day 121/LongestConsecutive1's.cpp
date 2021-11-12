class Solution{
public:
	int getMaxLength(bool arr[], int n){
		int count=0;
		int res=0;
		for(int i=0;i<n;i++){
			if(arr[i]==0)
				count=0;
			else
				count++;
				res=max(res,count);
		}
		return res;
	}
};