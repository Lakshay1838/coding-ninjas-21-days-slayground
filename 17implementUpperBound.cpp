// {Implement UpperBound :  }
// step 1: decalre s=0,e=size-1,ans = n;
// step 2: find mid s+(e-s)/2;
// step 3: check if mid element is greater than the x then update asn with mid 
//             and e with mid-1;
// step 4: else s = mid+1;
// step 5: repeate step 2 to 5 until s <= e;
// step 6: return ans;
// CORNER CASE :: initialse ans with n because if no upper bound exists then  
//                            we have to return n;


int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.
	int s = 0;
	int e = n-1;
	int ans  = n;

	// if(arr[n-1] < x)	return n;

	while(s <= e){
		int mid = s+(e-s)/2;
		if(arr[mid] > x){
			ans = mid;
			e = mid-1;
		}else{
			s = mid+1;
		}
	}
	return ans;
}