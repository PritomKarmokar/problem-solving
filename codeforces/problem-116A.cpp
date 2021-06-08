#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

int main()
{
	fast;
	int n;
	cin>>n;

	int ans = 0, mx = -1;

	for(int i = 0 ; i < n ; i++){
		int a, b;
		cin>>a>>b;
		ans = ans + b - a;
		mx = max(mx, ans);
	}	

	cout<<mx<<endl;

	return 0;
}