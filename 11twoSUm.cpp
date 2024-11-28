// {Two Sum : sum of 2 distinct elements equals to target}

// step 1: sort the array and decalre s=0 & e = n-1; 

// step 2: check if sum of elements on indexes s & e equals to target then return "YES" if greater then decreement e && if smaller then increement s

// step 3: repeat step 2 until s < e

// step 4: at last return "NO"

#include <vector>
#include <string>
#include <algorithm>
using namespace std;
string read(int n, vector<int> book, int target)
{
    sort(book.begin(),book.end());
    int s=0;
    int e=n-1;

    while(s < e){
        int sum = book[s] + book[e];
        if(sum == target){
            return "YES";
        }else if(sum < target){
            s++;
        }else{
            e--;
        }
    }
    return "NO";
}
