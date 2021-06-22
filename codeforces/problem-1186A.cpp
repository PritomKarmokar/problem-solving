#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, k;
	cin>>n>>m>>k;

	int check = min(m,k);

	if(n <= check) cout<<"Yes\n";
	else cout<<"No\n";

	return 0;
}