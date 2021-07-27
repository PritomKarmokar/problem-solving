#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;

    ll pos = 0, neg = 0, zr = 0;
    ll sum_p = 0, sum_n = 0;

    ll arr[n];
    for(ll i = 0 ; i < n ; i++){
        cin>>arr[i];
        if(arr[i] > 0) pos++, sum_p += arr[i];
        else if(arr[i] < 0) neg++, sum_n += arr[i];
        else zr++;
    } 

    ll ans = abs(sum_n) - neg + (sum_p - pos) + zr;

    if(neg%2 != 0 and zr == 0) ans += 2;

    cout<<ans<<endl;

    return 0;

}