int countDigits(int n){
	// Write your code here.
	int count=0;
	while(n!=0){
		count++;
		n/=10;
	}	
	return count;
}