// {Search an Element in Array with TC - O(logn)}
// step 1: declare variable s = 0 & e = arr.size() - 1
// step 2:  a while loop until s is greater than equals e
// step 3: find mid using s & e.
// step 4: check if element at mid index equals target return mid
// step 5: if mid element is greater e -- & if mid element is smaller s++.
// step 6: update this until s <= e and update mid. 
// step 7: return -1. as number is not present in array.


// Corner case : update mid  and mid = s + (e-s)/2; as mid is int it will overflow    
//                       by normal calculation.

int search(vector<int> &nums, int target) {
    // Write your code here.
    int s=0;
    int e=nums.size() - 1;

    while(s <= e){
        int mid = s+ (e-s)/2;
        if(nums[mid] == target){
            return mid;
        }else if(nums[mid] > target){
            e--;
        }else{
            s++;
        }
    }
    return -1;
}