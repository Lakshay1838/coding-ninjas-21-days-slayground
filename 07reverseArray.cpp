vector<int> reverseArray(int n, vector<int> &nums)
{
    vector<int> v;
    for(int i=n-1;i>=0;i--){
        v.push_back(nums[i]);
    }
    return v;
}