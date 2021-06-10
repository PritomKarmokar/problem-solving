#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

int main()
{
	fast;

	int tc;
	cin>>tc;
	set<int> s;

	int n;
	cin>>n;
	
	for(int i = 0 ; i < n ; i++){
		int x; cin>>x;
		s.insert(x);
	}

	int m;
	cin>>m;

	for(int i = 0 ; i < m ; i++){
		int x; cin>>x;
		s.insert(x);
	}



	if(s.size() == tc) cout<<"I become the guy.\n";
	else cout<<"Oh, my keyboard!\n";

	return 0;
}