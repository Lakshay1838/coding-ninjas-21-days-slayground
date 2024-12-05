// {spiral print matrix : }
// step 1: decalre m = rows ,n =m cols , total = m X n and a count variable =0 
//             to track the no of elements traversed;
// step 2: declare 4 variables top = 0 , right = n-1 , bottom m-1 , left=0; 
// step 3: print first row from left to right at top index row , increement top;
// step 4: print last column from top to bottom at right index,decreement right;
// step 5: print last row form right to left at bottom index , decreement bottom;
// step 6: print first column from bottom to top at left index , increement left;
// step 7:  increement count in repeat steps 3 to 6 until count < total;
// CORNER CASE :: upadate count && check in each iteration if count < total;


vector<int> spiralMatrix(vector<vector<int>>&mat) {

    // store ans 
    vector<int> ans;

    int m=mat.size();
    int n=mat[0].size();
    int total = m*n;
    int count=0;

    int top = 0;
    int right=n-1;
    int bottom=m-1;
    int left = 0;

    while(count < total){
        for(int i=left;i<=right && count < total;i++){
            ans.push_back(mat[top][i]);
            count++;
        }
        top++;
        for(int i=top;i<=bottom && count < total;i++){
            ans.push_back(mat[i][right]);
            count++;
        }
        right--;
        for(int i=right;i>=left && count < total;i--){
            ans.push_back(mat[bottom][i]);
            count++;
        }
        bottom--;
        for(int i=bottom;i>=top && count < total;i--){
            ans.push_back(mat[i][left]);
            count++;
        }
        left++;
    }
    return ans;
}
