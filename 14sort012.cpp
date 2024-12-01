// {Sort an array of 0 1 2}
// step 1: decalre 3 variables to track 0(z) , 1(i) , 2(t).
// step 2: check conditions :
//             if( current element == 0) swap indexes i , z and increement both.
//             else if(current element == 2) swap indexes i,t decreement t not i bcs 
//                                                            we have to recheck the value after 
//                                                             swapping.
//             else (val = 1) increement i .
// step 3: repeat until i <= t .
// corner case : step 2 conditions.

#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    int i = 0;
    int z = 0;
    int t = n-1;

    while(i <= t){
        if(arr[i] == 0){
            swap(arr[i],arr[z]);
            i++;
            z++;
        }else if(arr[i] == 2){
            swap(arr[i],arr[t]);
            t--;
        }else{
            i++;
        }
    }
}
