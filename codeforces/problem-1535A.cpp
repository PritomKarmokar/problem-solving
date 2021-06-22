#include<bits/stdc++.h>

using namespace std;

int main()
{
	int tc;
	cin>>tc;

	while(tc--){
		int a, b, c, d;
		cin>>a>>b>>c>>d;

		if(min(a,b) < max(c,d) && max(a,b) > min(c,d)){
			cout<<"YES\n";
		}
		else cout<<"NO\n";
	}

	return 0;
}