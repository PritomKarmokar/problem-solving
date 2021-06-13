#include<bits/stdc++.h>

using namespace std;

int main()
{
	int tc;
	cin>>tc;

	while(tc--){
		int a, b;
		cin>>a>>b;

		int ans = 0;
		
		if(a%b != 0) ans = b - a%b;

		cout<<ans<<endl;

	}

	return 0;
}