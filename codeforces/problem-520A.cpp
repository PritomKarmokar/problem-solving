#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

int main()
{
	fast;

	int n;
	string word;
	cin>>n>>word;

	set<char> st;

	for(int i = 0 ; i < n ; i++){
		char ch = word[i]; 
		if(isupper(ch))
			ch = tolower(ch);
		st.insert(ch);
	}
	
	int l = st.size();

	if(l == 26) cout<<"YES\n";
	else cout<<"NO\n";

	return 0;
}