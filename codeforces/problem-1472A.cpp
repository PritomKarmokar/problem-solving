#include<bits/stdc++.h>

using namespace std;

void solve()
{
	int w, h, n;
	cin>>w>>h>>n;
	
	int total = 1;

	while(w%2 == 0){
		w /= 2;
		total *= 2;
	}
	while(h%2 == 0){
		h /= 2;
		total *= 2;
	}

	if(total >= n) cout<<"YES\n";
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