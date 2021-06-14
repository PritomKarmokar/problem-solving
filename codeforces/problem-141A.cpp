#include<bits/stdc++.h>

using namespace std;

int main()
{
	string a, b, c, d;
	cin>>a>>b>>c;

	d = a + b;

	sort(c.begin(), c.end());
	sort(d.begin(), d.end());

	if(c != d) cout<<"NO\n";
	else cout<<"YES\n";

	return 0;
}