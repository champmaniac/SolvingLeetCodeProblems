class solution{
	public:
		vector<int> SortingTheArray(vector<int> arr){
			arr ={5,4,2,3,1};
			cyclicSort(arr);
			return arr;
		}
		
		void cyclicSort(vector<int> &arr){
			int i=0;
			while(i<arr.size()){
				int correctIdx = arr[i]-1;
				if(arr[i]!=arr[correctIdx])
					swap(arr,i,correctIdx);
				else
					i++;
			}
		}

		void swap(vector<int> &arr, int first, int second){
			int temp =arr[first];
			arr[first] = arr[second];
			arr[second] =temp;
		}


};