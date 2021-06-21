#include<bits/stdc++.h>

using namespace std;

void solve()
{
	int n;
	cin>>n;

	int cnt = 0, rem;

	while(true){
		n -= 2020;
		if(n < 0) break;
		else{
			cnt++;
			rem = n%2020;
		}
		//cout<<"n = "<<n<<endl;
		//cout<<"cnt = "<<cnt<<" rem = "<<rem<<endl;
	}
	if(cnt > 0 and cnt >= rem) cout<<"YES\n";
	else cout<<"NO\n";
}

int main()
{
	int tc;
	cin>>tc;

	while(tc--){
		solve();
	}

	return 0;
}