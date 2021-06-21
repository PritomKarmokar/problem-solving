#include<bits/stdc++.h>

using namespace std;

void solve()
{
	int n, x;
	cin>>n;

	int sum = 0, cnt1 = 0, cnt2 = 0;

	for(int i = 0 ; i < n ; i++){
		cin>>x;
		sum += x;
		if(x == 1) cnt1++;
		else cnt2++;
	}

	if(sum%2) cout<<"No\n";
	else{
		int half = sum/2;
		
		if(half%2 == 0 || (half%2 != 0 && cnt1 != 0)){
			cout<<"Yes\n";
		}
		else cout<<"No\n";
	}
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