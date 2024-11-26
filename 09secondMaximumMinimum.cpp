vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    vector<int> ans;
    int maxi = INT_MIN;
    int maxilite = maxi;
    int mini = INT_MAX;
    int minilite = mini;

    for(int i=0;i<n;i++){
        if(maxi < a[i]){
            maxilite = maxi;
            maxi = a[i];
        }
        if(maxilite < a[i] && a[i] < maxi){
            maxilite = a[i];
        }
        if(mini > a[i]){
            minilite = mini;
            mini = a[i];
        }
        if(minilite > a[i] && mini < a[i]){
            minilite = a[i];
        }
    }
    ans.push_back(maxilite);
    ans.push_back(minilite);
    return ans;
}
// {find second maximum and second minimum}
// step 1: declare 4 variable (maxi - INT_MIN for max. element)(maxilite - maxi for second largest)(mini - INT_MAX for smallest element)(minilite - mini for second smallest element)
// step 2: iterate over array check conditions
//  if greater than maxi then update maxilite and maxi
//  if greater than maxilite and smaller than maxi then update maxilite
//  if smaller than mini update minilite and mini 
//  if smaller than minilite and larger than mini then update minilite 
// step 3: declare a vector to store ans;
// step 4: push maxilite and minilite ;
// step 5: Return ans;

