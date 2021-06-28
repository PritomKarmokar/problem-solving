#include<bits/stdc++.h>
#define pi pair<int, int>

using namespace std;

int main()
{
	int n;
	cin>>n;

	vector<pi> arr;
	
	for(int i = 0 ; i < n ; i++){
		int x, y;
		cin>>x>>y;
		arr.push_back(make_pair(x,y));
	}

	sort(arr.begin(), arr.end());

	int ans = 0;
	
	for(int i = 0 ; i < n ; i++){
		if(arr[i].second >= ans)
			ans = arr[i].second;
		else 
			ans = arr[i].first;
	}
	
	cout<<ans<<endl;

	return 0;
}