#include<bits/stdc++.h>

using namespace std;

int main()
{
	int tc;
	cin>>tc;

	while(tc--){
		int n; 
		cin>>n;

		int mn = INT_MAX;
		int arr[n];

		for(int i = 0 ; i < n ; i++){
			cin>>arr[i];
			mn = min(mn, arr[i]);
		}

		int ans = 0;
		
		for(int i = 0 ; i < n ; i++){
			if(arr[i] != mn) ans++;
		}

		cout<<ans<<endl;
	}

	return 0;
}