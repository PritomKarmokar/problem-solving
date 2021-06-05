#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	
	int tc;
	cin>>tc;

	int ans = 0;

	while(tc--){
		int a, b, c;
		cin>>a>>b>>c;

		int sum = a+b+c;
		if(sum >= 2) ans++;
	}

	cout<<ans<<endl;
}