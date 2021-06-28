#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int tc;
	cin>>tc;

	while(tc--){
		ll a, b, c;
		cin>>a>>b>>c;

		if(a < c) cout<<"1 ";
		else cout<<"-1 ";

		if(a*b > c) cout<<b<<endl;
		else cout<<"-1"<<endl;
	}

	return 0;
}
