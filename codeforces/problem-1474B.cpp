#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e7;
bool status[(N/2)];
vector<ll> prime;

void sieve()
{
    ll limit = sqrt(N);

    for(ll i = 3; i <= limit; i+=2){
        if(!status[i>>1])
            for(ll j = i*i ; j <= N ; j+= i+i)
                status[j>>1] = 1;
    }
    prime.push_back(2);
    for(ll i = 3; i <= N; i+=2)
        if(!status[i>>1]) prime.push_back(i);
}

void solve()
{
    ll n;
    cin>>n;

    ll d1 = *lower_bound(prime.begin(), prime.end(), n+1);
    ll d2 = *lower_bound(prime.begin(), prime.end(), n+d1);
    
    cout<<d1*d2<<"\n";
}

int main()
{
    sieve();
    int tc;
    cin>>tc;

    while(tc--){
        solve();
    }
    return 0;
}

