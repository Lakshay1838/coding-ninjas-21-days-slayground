vector<int> getFrequencies(vector<int>& v) {

    unordered_map<int,int> mp;
    for(int n:v){
        mp[n]++;
    }

    int mostFr = 0;
    int leastFr = 0;

    int maxi = 0;
    int mini = INT_MAX;

    for(auto it:mp){
        int ele = it.first;

        if(mp[ele] >= maxi){
            if(mp[ele] == maxi){
                mostFr = min(ele,mostFr);
            }else{
                mostFr = ele;
                maxi = mp[ele];
            }
        }
        if(mp[ele] <= mini){
            if(mp[ele] == mini){
                leastFr = min(leastFr,ele);
            }else{
                leastFr = ele;
                mini = mp[ele];
            }
        }
    }

    vector<int> ans;
    ans.push_back(mostFr);
    ans.push_back(leastFr);
    return ans;
}
// {Find Most/Least Frequent Element}
// step 1: declare map to count frequency of all elements.
// step 2: declare 2 elements to store most/least frequent elements
//  declare 2 variables to store max/min frequency during iteration of
//  map.
// step 3: iterate and compare frequency if less/more than maxi/mini update 
//  mostFreq/leastFreq.
// step 4: declare a vector to store ans and push the least/most frequent
// step 5: return ans;
