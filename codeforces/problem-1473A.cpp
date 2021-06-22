#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	int tc;
	cin>>tc;

	while(tc--){
		int n, d;
		cin>>n>>d;

		vector<int> arr;
		bool ok = 1;

		for(int i = 0 ; i < n ; i++){
			int x;
			cin>>x;
			if(x <= d) arr.push_back(x);
			else ok = 0;
		}

		int l = arr.size();

		if(ok) cout<<"Yes\n";
		else if(l < 2) cout<<"No\n";
		else{
			sort(arr.begin(), arr.end());
			int sum = arr[0]+arr[1];

			if(sum <= d) cout<<"Yes\n";
			else cout<<"No\n";
		}
	}
	return 0;
}