#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int tc;
	cin>>tc;

	while(tc--){
		int n, m;
		cin>>n>>m;

		int sum = 0;

		for(int i = 0 ; i < n ; i++){
			int x ; cin>>x;
			sum += x;
		}

		if(sum == m) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
