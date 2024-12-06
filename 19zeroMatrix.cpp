// {Zero Matrix .}
// step 1: decalre a 2D vector to store ans and initialize it with -1;
// step 2: traverse over the given matrix if current element is zero then 
//             update the row and col in the ans. do this all until you reach the
//             last element;
// step 3: at last traverse then ans matrix and if ele == -1 update the element 
//             with the element at same position in given matrix.
// step 4: return ans matrix.


#include <bits/stdc++.h> 
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	// Write your code here.
	vector<vector<int>> v(n,vector<int>(m,-1));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j] == 0){
				for(int k=0;k<m;k++){
					v[i][k] = 0;
				}
				for(int l=0;l<n;l++){
					v[l][j] = 0;
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(v[i][j] == -1){
				v[i][j] = matrix[i][j];
			}
		}
	}
	return v;
}