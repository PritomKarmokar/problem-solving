#include<bits/stdc++.h>

using namespace std;

int main()
{
	int tc;
	cin>>tc;

	while(tc--){
		int n;
		cin>>n;

		vector<int> arr;
		for(int i = 0 ; i < n; i++){
			int x;
			cin>>x;
			arr.push_back(x);
		}
		int cnt = 0;
		for(int i = 1; i < n ; i++){
			int mx = max(arr[i-1], arr[i]);
			int mn = min(arr[i-1], arr[i]);
			while(2*mn < mx){
				mn = 2*mn;
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}