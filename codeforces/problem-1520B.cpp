#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0);

	int tc;
	cin>>tc;

	while(tc--){
		int n;
		cin>>n;

		int ans = 0;

		for(int i = 1 ; i <= n ; i = (i*10)+1){
			for(int j = 1 ; j <= 9 ; j++){
				if(i*j <= n) {
					//cout<<i*j<<endl;
					ans++;
				}
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}