#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0);

	int n, k;
	cin>>n>>k;

	int arr[n];

	for(int i = 0 ; i < n ; i++){
		cin>>arr[i];
	}

	int val = arr[k-1];

	int ans = 0;

	for(int i = 0 ; i < n ; i++){
		if(arr[i] > 0 && arr[i] >= val) ans++;
	}

	cout<<ans<<endl;

	return 0;
}