// {add one to number represented as array}

// step 1: declare carry equals 1 and a vector v to store ans.

// step 2: iterate in reverse order in seperate variable store sum of carry and

//             current number push it in vector v;

// step 3: check if carry is not equals 0 then push it in v;

// step 4: reverse the v using inbuilt fxn reverse.

// step 5: check if element at first index is 0 then remove until first index value  

//             is 0 && size > 1.

// step 5: return v;

#include <bits/stdc++.h> 
vector<int> addOneToNumber(vector<int> arr)
{
    // Write your code here
    int n = arr.size();

    int carry = 1;
    vector<int> v;

    for(int i=n-1;i >= 0;i--){
        int sum = arr[i] + carry;
        v.push_back(sum % 10);
        carry = sum/10;
    }
    if(carry != 0){
        v.push_back(carry);
    }
    reverse(v.begin(),v.end());
    while (v.size() > 1 && v[0] == 0) {
        v.erase(v.begin());
    }
    return v;
}