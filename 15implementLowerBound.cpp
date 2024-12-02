// {Implement Lower Bound}
// step 1: declare ans = 0 to store ans and s=0 & e = n-1 for searching;
// step 2: check if mid element is >= x then update and e=mid-1 else s=mid+1;
// step 3: repeat step2 until s <= e

int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int s=0;
	int e=n-1;
	if(arr[n-1] < x)	return n;
	int ans = 0;
	
	while(s <= e){
		int mid = s+(e-s)/2;
		if(arr[mid] >= x){
			ans = mid;
			e = mid-1;
		}else{
			s = mid+1;
		}
	}
	return ans;
}
