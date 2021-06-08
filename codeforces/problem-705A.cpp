#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

int main()
{
	fast;

	int tc;
	cin>>tc;

	for(int i = 1 ; i <= tc; i++){
		if(i%2) cout<<"I hate ";
		else cout<<"I love ";

		if(i == tc) cout<<"it\n";
		else cout<<"that ";
	}

	return 0;
}