// {PASCAL'S TRIANGLE : }
// step 1: decalre a 2D vector to store ans;
// step 2: a loop from 0-n to  fill rows of ans with data;
// step 3: loop from 1 to < i. and fill expression v1[j] = v[i - 1][j - 1] + v[i - 1][j]; 
//             in a seperate vector;
// step 4: push the above in the ans;
// step 5: return ans;


#include <bits/stdc++.h>
using namespace std;

vector<vector<long long int>> printPascal(int n) 
{
    vector<vector<long long int>> v;

    for (int i = 0; i < n; i++) {
        vector<long long int> v1(i + 1, 1);
        for (int j = 1; j < i; j++) {
            v1[j] = v[i - 1][j - 1] + v[i - 1][j];
        }
        v.push_back(v1);
    }
    return v;
}

