#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    while(tc--){
        ll n;
        cin>>n;

        ll sum = 0, total = 0;
        bool ok = 1;

        for(ll i = 0 ; i < n ; i++){
            ll x; cin>>x;
            total += i;
            sum += x;
            if(sum < total){
                ok = 0;
            }
        }
        if(ok) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}