int isSorted(int n, vector<int> a) {
    int ele = a[0];
    for(int i=1;i<n;i++){
        if(a[i] < ele){
            return 0;
        }
        ele = a[i];
    }
    return 1;
}
