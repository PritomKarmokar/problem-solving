#include<bits/stdc++.h>

using namespace std;

int main()
{
	int tc;
	cin>>tc;

	while(tc--){
		int n;
		cin>>n;

		int arr[n];
		for(int i = 0 ; i < n ; i++) cin>>arr[i];

		for(int i = 0, j = n-1; i < j ; i++, j--){
			cout<<arr[i]<<" "<<arr[j]<<" ";
		}
		if(n%2) cout<<arr[n/2]<<" ";
		cout<<endl;
	}
	return 0;
}