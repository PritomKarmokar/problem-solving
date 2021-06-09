#include<bits/stdc++.h>

using namespace std;

int main()
{
	int tc;
	cin>>tc;

	while(tc--){
		int n;
		string str;
		cin>>n>>str;

		set<char> s;
		s.insert(str[0]);

		bool ok = 1;

		for(int i = 1 ; i < n ; i++){
			if(str[i] != str[i-1]){
				if(s.count(str[i])){
					ok = 0;
					break;
				}
			}
			s.insert(str[i]);
		}

		if(ok) cout<<"YES\n";
		else cout<<"NO\n";
	}

	return 0;
}