#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, k;
	cin>>n>>k;

	int arr[n+1] = {0};

	for(int i = 1; i <= n ; i++){
		cin>>arr[i];
		arr[i] = arr[i-1] + arr[i];
	}

	int ans = 1;
	int min = arr[k];
	
	for(int i = 1 ; i <= n-k ; i++){
		if(arr[k+i] - arr[i] < min){
			min = arr[k+i] - arr[i];
			ans = i+1;
		}
	}
	cout<<ans<<endl;

	return 0;
}