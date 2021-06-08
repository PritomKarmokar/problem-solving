#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

int main()
{
	fast;

	int n, h;
	cin>>n>>h;

	int ans = 0 ;

	for(int i = 0 ; i < n ; i++){
		int x; cin>>x;
		if(x > h) ans += 2;
		else ans += 1;
	}

	cout<<ans<<endl;
	
	return 0;
}