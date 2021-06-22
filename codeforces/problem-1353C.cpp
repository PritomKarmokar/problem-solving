#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	int tc;
	cin>>tc;

	while(tc--){
		ll n, ans = 0;
		cin>>n;

		ll h = n/2;

		ans = (h * (h+1) * (2*h + 1)) / 6;

		ans = ans * 8;

		cout<<ans<<endl;
		//cout<<h<<endl;
	}

	return 0;
}