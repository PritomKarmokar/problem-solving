#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

int main()
{
	fast;

	int tc;
	cin>>tc;

	map<int, int> arr;

	for(int i = 1 ; i <= tc ; i++){
		int x; cin>>x;
		arr[x] = i;
	}

	for(int i = 1; i <= tc; i++){
		cout<<arr[i]<<" ";
	}

	cout<<endl;
	
	return 0;
}