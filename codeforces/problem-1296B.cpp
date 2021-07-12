#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);

    int tc;
    cin>>tc;

    while(tc--){
        ll n;
        cin>>n;

        ll t = 0, bonus = 0, k = 0;
        ll m = n;
        while(n > 9){
            k = n%10;
            bonus = n/10;
            n = bonus+k;
            t += bonus;
        }

        ll ans = m+t;
        
        cout<<ans<<endl;
    }

    return 0;
}