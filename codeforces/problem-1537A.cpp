#include<bits/stdc++.h>

using namespace std;

int main()
{
	int tc;
	cin>>tc;

	while(tc--){
		int n;
		cin>>n;

		int x, sum = 0;
		for(int i = 0 ; i < n ; i++){
			cin>>x;
			sum += x;
		}
		if(sum >= n) cout<<abs(sum-n)<<endl;
		else cout<<"1\n";
	}
	return 0;
}