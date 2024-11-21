#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n;
        cin>>n;

        if(n == 1 || n==2){
                cout<<1<<endl;
                return 0;
        }
        int one=1;
        int two=1;
        int ans = 0;
        for(int i=3;i<=n;i++){
                ans = one + two;
                two = one;
                one = ans;
        }
        cout<<ans<<endl;
        return 0;
}