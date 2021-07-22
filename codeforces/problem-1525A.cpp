#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main()
{
    fast;
    
    int tc;
    cin>>tc;

    while(tc--){
        int n;
        cin>>n;

        int m = 100-n;

        if(m == 0) cout<<"1\n";
        else{
            int gcd = __gcd(n,m);
            cout<<100/gcd<<"\n";
        }

    }
    return 0;
}