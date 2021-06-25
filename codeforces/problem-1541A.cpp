#include<bits/stdc++.h>

using namespace std;

int main()
{
	int tc;
	cin>>tc;

	while(tc--){
		int n, i;
		cin>>n;

		int arr[n+1];
		for(i = 1; i <= n ; i++) arr[i] = i;

		for(i = 2 ; i <= n ; i +=2){
			swap(arr[i], arr[i-1]);
		}
		if(n%2) swap(arr[n], arr[n-1]);
		
		for(int i = 1; i <= n ; i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}