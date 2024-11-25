int calcGCD(int n, int m){
    while(n != m){
        if( n > m){
            n = n-m;
        }
        else if(m > n ){
            m = m - n;
        }
    }
    return n;
}