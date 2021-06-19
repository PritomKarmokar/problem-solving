#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
	ll n;
	cin>>n;

	bool ok = 0;
	while(n%2 == 0){
		n = n/2;
	}

	if(n > 1) ok = 1;

	if(ok) cout<<"YES\n";
	else cout<<"NO\n";
}

int main()
{
	int tc;
	cin>>tc;

	while(tc--){
		solve();
	}

	return 0;
}