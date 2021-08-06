#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;

    vector<ll> v(n+1), u(n+1);
    for(ll i = 1; i <= n ; i++) cin>>v[i];

    u = v;
    sort(u.begin(), u.end());

    for(ll i = 1; i <= n ; i++){
        v[i] += v[i-1];
        u[i] += u[i-1];
    }

    ll m;
    cin>>m;

    while(m--){

        ll type, l, r;
        cin>>type>>l>>r;
        ll ans = 0;
        if(type == 1) ans = v[r] - v[l-1];
        else ans = u[r] - u[l-1];

        cout<<ans<<endl;

    }

    return 0;

}