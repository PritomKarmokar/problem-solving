#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

int main()
{
	fast;

	int tc;
	cin>>tc;

	string str = "", prev = "";
	int total = 0;
	while(tc--){
		cin>>str;
		if(str != prev){
			prev = str;
			total += 1;
		}
	}
	cout<<total<<endl;

	return 0;
}